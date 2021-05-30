#include <iostream>
#include <deque>
#include <string>
#include <sstream>
using namespace std;
int main(void){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int tc, n; cin >> tc;
	string inst, arr, buf; //inst=R,D와같은 명령어   arr=입력되는 배열
	deque <string> dq;
	for (int i = 0; i < tc; i++){
		cin >> inst >> n >> arr;
		bool error = false;

		//','를 기준으로 끊어서 dq에 푸시해줍니다. ','가 없는 경우에도 상관없습니다.
		istringstream ss(arr.substr(1,arr.length()-2));
		while(getline(ss,buf,','))
			dq.push_back(buf);
		bool reversed = false; //R이 적용되었는지 구분해줍니다.

		for (int k = 0; k < inst.length(); k++){
			if(inst[k] == 'R'){
				reversed = !reversed;
			}
			else if(inst[k] == 'D'){
				if(n == 0){
					cout << "error" << '\n';
					error = !error;
					break;
				}else{
					if (!reversed){
						dq.pop_front();
						n--;
					}
					if(reversed){
						dq.pop_back();
						n--;
					}
				}
			}
		}
		if(!error){
			cout << '[';
			if(reversed){//R이 적용된거면 popback
				while(n){
					cout << dq.back();
					dq.pop_back();
					n--;
					if(n > 0) cout << ',';
				}
			}else if(!reversed){//적용안된거면 popfront
				while(n){
					cout << dq.front();
					dq.pop_front();
					n--;
					if(n > 0) cout << ',';
				}
			}
			cout << ']' << '\n';
		}
	}
	return 0;
}
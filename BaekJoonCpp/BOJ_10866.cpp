#include <iostream>
#include <deque>
#include <string>
using namespace std;
//정수를 저장하는 deque 구현하기
deque <int> dq;
int main(void){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int x,N; cin >> N;
	string instruction;
	for (int i = 0; i < N; i++){
		cin >> instruction;
		if(instruction == "size")
			cout << dq.size() << '\n';
		else if(instruction == "back" )
			dq.empty() ? cout << -1 << '\n' : cout << dq.back() << '\n';
		else if(instruction == "front" )
			dq.empty() ? cout << -1 << '\n' : cout << dq.front() << '\n';
		else if(instruction == "empty" )
			cout << dq.empty() << '\n';
		else if(instruction == "push_front" ){
			cin >> x;
			dq.push_front(x);
		}
		else if(instruction == "push_back" ){
			cin >> x;
			dq.push_back(x);
		}
		else if(instruction == "pop_back" ){
			if(dq.empty()){
				cout << -1 << '\n';
			}else{
				cout << dq.back() << '\n';
				dq.pop_back();
			}
		}
		else if(instruction == "pop_front" ){
			if(dq.empty()){
				cout << -1 << '\n';
			}else{
				cout << dq.front() << '\n';
				dq.pop_front();
			}
		}
	}
	return 0;
}
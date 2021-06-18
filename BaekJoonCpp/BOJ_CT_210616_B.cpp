#include <iostream> 

using namespace std;
int main(void){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N, A, i,bnum = 0; cin >> N >> bnum;
	bool check = true;
	for (i = 1; i < N; i++){
		cin >> A;
		if(check) {
			if(bnum < A) bnum = A;
			else if(bnum == A){
				cout << "NO";
				break;
			}else{
				bnum = A;
				check = false;
			}
		}else{
			if (bnum > A) bnum = A;
			else{
				cout << "NO";
				break;
			}
		}
	}
	if(i == N) cout << "YES";
	return 0;
}
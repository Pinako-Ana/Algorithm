#include <iostream> 
using namespace std;
int main(void){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string res = "";
	long N; cin >> N;
	if(N == 0) res = '0';
	while(N != 0){
		if(N % -2 == 0) res = '0' + res;
		else res = '1' + res;
		if(N < 0) N = (N-1) / -2;
		else N /= -2;
	}
	cout << res;
	return 0;
}
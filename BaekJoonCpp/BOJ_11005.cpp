#include <iostream> 
using namespace std;
char rmd[36] = {'0','1','2','3','4','5','6','7','8','9',
				'A','B','C','D','E','F','G','H','I','J',
				'K','L','M','N','O','P','Q','R','S','T',
				'U','V','W','X','Y','Z'};
int main(void){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string res ="";
	int N,B; cin >> N >> B;
	while(N != 0){
		res = rmd[N%B] + res;
		N /= B;
	}
	cout << res;
	return 0;
}
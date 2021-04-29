#include <iostream>
using namespace std;
int t,f;
int main(void){
	int cnt = 0, n; cin >> n;
	for (int i = 2; i <= n; i *= 2){ t += n / i; }
	for (int k = 5; k <= n; k *= 5){ f += n / k; }
	cout << (t > f ? f : t) ; 
	return 0;
}
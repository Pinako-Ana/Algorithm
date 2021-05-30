#include <iostream>
#include <cmath>
using namespace std;
int cnt = 0;
void hansu(int a){
	if(a < 100) cnt++;
	if(a >= 100){
		double sum = 0, k;
		int d = a;
		while(d != 0){
			sum = sum + d%10;
			d /= 10;
		}
		k = floor(log10(a)) + 1;
		if(sum == (k * (floor(a/pow(10,k-1)) + a%10) / 2 )) {
			cnt++;
		}
	}
}
int main(void){
	int N; cin >> N;
	for (int i = 1; i <= N; i++)
		hansu(i);
	cout << cnt;
	return 0;
}
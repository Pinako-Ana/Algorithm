#include <iostream>
using namespace std;
long long ft[4000001];
long long inv[4000001];
long long p = 1000000007;
long long calc(long long a , long long b){
	long long ret = 1;
	while(b > 0){
		if(b % 2){
			ret *= a;
			ret %= p;
		}
		a *= a;
		a %= p;
		b /= 2;
	}
	return ret;
}
int main(void){
	int n,k; scanf("%d %d", &n,&k);
	ft[0] = 1;
	for (int i = 1; i <= n; i++){ ft[i] = (ft[i-1] * i)%p;}
	inv[n] = calc(ft[n],p-2);
	for (int i = n-1; i >= 0; i--){ inv[i] = ((inv[i+1])* (i+1)) % p; }
	long long pp = (ft[n] * inv[n-k])%p;
	printf("%lld", (pp * inv[k])%p);
	return 0;
}
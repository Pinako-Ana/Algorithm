#include <cstdio>
using namespace std;
long long mypow(long long x, long long n){
	long long exp = 1;
	while(n){
		if(n & 1) exp *= x;
		x *= x;
		n >>= 1;
	}
	return exp;
}
int calcnum(long long x){
	long long y = 1;
	int t = -1;
	if(x == 1) return 0;
	while(y <= x){
		y <<= 1;
		t++;
	}
	return t;
}
long long hello(long long a){
	long long sum = 0;
	while(a != 0){
		long long k = calcnum(a);
		a -= mypow(2,k);
		sum += mypow(3,k);
	}
	return sum;
}
int main(void){
	int T; scanf("%d", &T);
	long long N;
	for (int i = 0; i < T; i++){
		scanf("%lld", &N);
		printf("%lld\n", hello(N));
	}
}
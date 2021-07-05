#include <cstdio>
long long myfunc(long long n ,long long i , long long t){
	if(n == 1) return 1;
	if(t == 0) return 0;
	return (n - i + 1) * t + myfunc(i - 1,i/10,t - 1);
}
int main(void){
	long long n,i=1,t=0; scanf("%lld",&n);
	while(i <= n) {
		t++;
		i *= 10;
	}
	printf("%lld",myfunc(n,i/10,t));


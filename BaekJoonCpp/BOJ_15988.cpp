#include <cstdio>
#define p 1000000009
int main(void){
	int T,n; scanf("%d", &T);
	int dp[1000001] = {0,1,2,4};
	for (int i = 4; i < 1000001; i++)
		dp[i] = (dp[i-1] + (dp[i-2] + dp[i -3])%p)%p;
	while (T--){
		scanf("%d", &n);
		printf("%d\n", dp[n]);
	}
	return 0;
}

#include <cstdio>
int dp[100001];
int main(void){
	int N; scanf("%d",&N);
	dp[1] = 3;
	dp[2] = 7;
	for (int i = 3; i <= N; i++) dp[i] = (2*dp[i-1] + dp[i-2])%9901;
	printf("%d",dp[N]);
	return 0;
}

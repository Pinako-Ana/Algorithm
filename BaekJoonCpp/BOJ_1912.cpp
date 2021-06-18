#include <cstdio>
int dp[100001];
int main(void){
	int n,x,ans; scanf("%d",&n);
	scanf("%d", &dp[1]);
	ans = dp[1];
	for (int i = 2; i <= n; i++){
		scanf("%d",&x);
		dp[i] = (dp[i-1] + x > x) ? dp[i-1] + x : x;
		ans = (ans > dp[i]) ? ans : dp[i];
	}
	printf("%d", ans);
	return 0;
}
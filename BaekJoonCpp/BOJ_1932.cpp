#include <cstdio>
int dp[500][500];
int mymax(int a, int b){return a>b?a:b;};
int main(void){
	int max =0, n; scanf("%d",&n);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < i+1; j++)
			scanf("%d",&dp[i][j]);
	for (int i = 1; i < n; i++){
		dp[i][0] += dp[i-1][0];
		for (int j = 1; j < i; j++)
			dp[i][j] += mymax(dp[i-1][j-1],dp[i-1][j]);
		dp[i][i] += dp[i-1][i-1];
	}
	for (int i = 0; i < n; i++)
		if(max < dp[n-1][i]) max = dp[n-1][i];
	printf("%d",max);
	return 0;
}
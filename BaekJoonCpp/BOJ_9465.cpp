#include <cstdio>
int mymax(int a, int b){ return a > b ? a : b;}
int dp[2][100001];
int main(void){
	int tc,n; scanf("%d",&tc);
	for (int i = 0; i < tc; i++){
		scanf("%d",&n);
		int sticker[2][n+1];
		for (int j = 1; j <= n; j++){scanf("%d",&sticker[0][j]);}
		for (int j = 1; j <= n; j++){scanf("%d",&sticker[1][j]);}
		dp[0][1] = sticker[0][1];
		dp[1][1] = sticker[1][1];
		for (int i = 2; i <= n; i++){
			dp[0][i] = mymax(dp[1][i-2],dp[1][i-1]) + sticker[0][i];
			dp[1][i] = mymax(dp[0][i-2],dp[0][i-1]) + sticker[1][i];
		}
		printf("%d\n", mymax(dp[0][n],dp[1][n]));
	}
	return 0;
}
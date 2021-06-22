#include <cstdio>
int mymax(int a, int b){ return a > b ? a : b;}
int main(void){
	int wine[10001],dp[10001]={0,}, n; scanf("%d",&n);
	for (int i = 1; i <= n; i++) scanf("%d", &wine[i]);
	dp[1] = wine[1];
	dp[2] = wine[1] + wine[2];
	for (int i = 3; i <= n; i++) dp[i] = mymax(dp[i-1], mymax(dp[i-2] + wine[i], dp[i-3] + wine[i-1] + wine[i]));	
	printf("%d",dp[n]);
}
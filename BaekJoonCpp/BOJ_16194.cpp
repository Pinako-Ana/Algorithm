#include <cstdio>
using namespace std;
int minnum(int a, int b) {return a < b ? a : b;}
int i, j, dp[1001], N;
int main(void){
	scanf("%d", &N);
	for (i = 1; i <= N; i++){
		scanf("%d",&dp[i]);
		for (j = 1; j <= i/2; j++)
			dp[i] = minnum(dp[i],dp[i - j] + dp[j]);
	}
	printf("%d",dp[N]);
	return 0;
}
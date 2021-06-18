#include <cstdio>
int dp[1001][10];
int main(void){
	int sum = 0,N; scanf("%d",&N);
	for (int i = 0; i < 10; i++) dp[1][i] = 1;
	for (int i = 2; i <= N; i++)
		for (int j = 0; j <= 9; j++)
			for (int k = j; k <= 9; k++)
				dp[i][j] = (dp[i][j] + dp[i-1][k])%10007;
	for (int i = 0; i < 10; i++) sum += dp[N][i];
	printf("%d",sum%10007);
	return 0;
}	

// #include <cstdio>
// int main() {
//     int n, ans = 1;
//     scanf("%d", &n);
//     for (int i = 1; i <= 9; ++i){
//         ans = ans * (n + i) % 10007;
// 		printf("%d\n", ans);
// 	}
//     printf("%d", ans * 6995 % 10007);
//     return 0;
// }

// #include <cstdio>
// int mymax(int a, int b){return a > b ? a : b;}
// int main(void){
// 	int n,res1 = -1001,res2 = -1001; scanf("%d",&n);
// 	int A[n+1], dp[n+1][2];
// 	for (int i = 1; i <= n; i++) scanf("%d",&A[i]);
// 	dp[0][0] = dp[0][1] = -1001;
// 	dp[1][0] = A[1];
// 	for (int i = 1; i <= n; i++){
// 		dp[i][0] = (dp[i-1][0] + A[i] > A[i])? dp[i-1][0] + A[i] : A[i];
// 		dp[i][1] = mymax(dp[i-1][0], dp[i-1][1] + A[i]);
// 	}
// 	for (int i = 1; i <= n; i++){
// 		res1 = mymax(res1, dp[i][0]);
// 		res2 = mymax(res2, dp[i][1]);
// 	}
// 	printf("%d",((n == 1) ? A[1]:mymax(res1,res2)));
// 	return 0;
// }

#include <cstdio>
int mymax(int a,int b){return a > b ? a : b;}
int main(void){
	int n,dp1=0,dp2=0,x,ans = -10001; scanf("%d",&n);
	for (int i = 0; i < n; i++){
		scanf("%d",&x);
		if(i == 0) dp1 = ans = x;
		else{
			dp2 = mymax(dp1, dp2+x);
			dp1 = mymax(dp1 + x, x);
			ans = mymax(ans, mymax(dp2,dp1));
		}
	}
	printf("%d",ans);
}
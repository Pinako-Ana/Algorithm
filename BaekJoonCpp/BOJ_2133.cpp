#include <cstdio>
int N,dp[31]={1,};
int main(void){
	for(int i=2;i<=30;i+=2){
		dp[i]+=dp[i-2]*3;
		for(int j=4;j<=i;j+=2)
			dp[i]+=dp[i-j]*2;
	}
	scanf("%d",&N);
	printf("%d",dp[N]);
}
#include <iostream>
long long dp[30][30];
long long line(int a, int b){
	for (int i = 1; i <= b; i++){
		for (int l = 0; l <= a; l++){
			if(i == l || l == 0) dp[i][l] = 1;
			else dp[i][l] = dp[i-1][l-1] + dp[i-1][l];
		}	
	}
	return dp[b][a];
}
int main(void){
	int test; scanf("%d",&test);
	int n,m;
	for (int k = 0; k < test; k++){
		scanf("%d %d",&n,&m);
		printf("%lld\n", line(n,m));
	}
	return 0;
}
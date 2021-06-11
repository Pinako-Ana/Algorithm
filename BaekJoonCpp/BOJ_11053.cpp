#include <cstdio>
int main(void){
	int N ,arr[1001],dp[1001],m = 0,i,j; scanf("%d",&N);
	for (i = 1; i <= N; i++){
		scanf("%d", &arr[i]);
		dp[i] = 1;
	}
	for (i = 1; i <= N; i++){
		for (j = 1; j < i; j++)
			if(arr[i] > arr[j] && dp[i] == dp[j]) dp[i] = dp[j] + 1;
		if(dp[i] > m) m = dp[i];
	}
	printf("%d",m);
	return 0;
}
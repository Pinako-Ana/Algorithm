#include <cstdio>
#include <algorithm>
int main(void){
	int N; scanf("%d",&N);
	int A[N],dp[N];
	for (int i = 0; i < N; i++) {
		scanf("%d",&A[i]);
		dp[i] = 1;
	}
	for (int i = 1; i < N; i++)
		for (int j = 0; j < i; j++)
			if(A[i] < A[j] && dp[i] == dp[j]) dp[i]++;
	printf("%d",*std::max_element(dp,dp+N));
	return 0;
}
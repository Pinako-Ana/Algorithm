#include <cstdio>
#include <algorithm>
int main(void){
	int N;scanf("%d",&N);
	int A[N],dp_fwd[N],dp_bwd[N];
	for (int i = 0; i < N; i++){
		scanf("%d", &A[i]);
		dp_fwd[i] = dp_bwd[i] = 1;
	}
	for (int i = 1; i < N; i++){
		for (int j = 0; j < i; j++)
			if(A[i] > A[j] && dp_fwd[i] == dp_fwd[j]) dp_fwd[i]++;
		for (int j = N - 1 ; j > N-i-1 ; j--)
			if(A[N-i-1] > A[j] && dp_bwd[N-i-1] == dp_bwd[j]) dp_bwd[N-i-1]++;
	}
	for (int i = 0; i < N; i++) dp_fwd[i] += dp_bwd[i];
	printf("%d",*std::max_element(dp_fwd,dp_fwd+N)-1);
}
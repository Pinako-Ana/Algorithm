#include <cstdio>
#include <algorithm>
int main(void){	
	int s;scanf("%d",&s);
	int A[s],dp[s];
	for (int i=0;i<s;i++)scanf("%d",&A[i]);
	for (int i=0;i<s;i++){dp[i]=A[i];
		for (int j=0;j<i;j++)
			if(A[i]>A[j]&&dp[i]<dp[j]+A[i])dp[i]=dp[j]+A[i];}
	printf("%d",*std::max_element(dp,dp+s));
	return 0;	
}
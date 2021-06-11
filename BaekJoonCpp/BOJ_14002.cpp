#include <cstdio>
using namespace std;
int N ,arr[1001],dp[1001],m = 0,i,j,pos; 
void printlis(int position){
	if (position == 0) return;
	int k = position;
	while(k--){
		if(dp[k] == dp[position] - 1){
			printlis(k);
			break;
		}
	}
	printf("%d ", arr[position]);
}
int main(void){
	scanf("%d",&N);
	for (i = 1; i <= N; i++){
		scanf("%d", &arr[i]);
		dp[i] = 1;
	}
	for (i = 1; i <= N; i++){
		for (j = 1; j < i; j++)
			if(arr[i] > arr[j] && dp[i] == dp[j]) dp[i] = dp[j] + 1;
		if(dp[i] > m){
			m = dp[i];
			pos = i;
		} 
	}
	printf("%d\n",m);
	printlis(pos);
	return 0;
}
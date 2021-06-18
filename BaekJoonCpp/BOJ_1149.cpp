#include <cstdio>
#include <algorithm>
struct RGB{int r,g,b;};
int dp[1001][3];
int min(int a, int b){return a > b ? b : a;}
int main(void){
	int N; scanf("%d", &N);
	RGB house[N+1];
	for (int i = 1; i <= N; i++)
		scanf("%d %d %d",&house[i].r,&house[i].g,&house[i].b);
	dp[1][0] = house[1].r;	
	dp[1][1] = house[1].g;	
	dp[1][2] = house[1].b;	
	for (int i = 2; i <= N; i++){
		dp[i][0] = min(dp[i-1][1], dp[i-1][2]) + house[i].r;
		dp[i][1] = min(dp[i-1][0], dp[i-1][2]) + house[i].g;
		dp[i][2] = min(dp[i-1][0], dp[i-1][1]) + house[i].b;
	}
	printf("%d",*std::min_element(dp[N],dp[N]+3));
	return 0;
}
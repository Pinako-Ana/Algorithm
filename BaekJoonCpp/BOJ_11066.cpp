#include <iostream>
#include <algorithm>
#include <cstring>
#include <climits>
using namespace std;

int dp[501][501];
int sum[501];
int chapter[501];

int cdp(int a, int b){
	if(dp[a][b] != 0) return dp[a][b];

	if(a == b) return dp[a][b] = 0;

	if(b - a == 1) return dp[a][b] = chapter[a] + chapter[b];
	
	dp[a][b] = INT_MAX;
	for (int p = a; p < b; p++)
		dp[a][b] = min(dp[a][b] ,cdp(a,p) + cdp(p+1,b));
	
	return dp[a][b] = dp[a][b] + sum[b] - sum[a-1];
}
int main(void){
	int testcase; cin >> testcase;
	for (int i = 1; i <= testcase; i++){
		memset(dp,0,sizeof(dp));
		int k; cin >> k;
		for (int j = 1; j <= k; j++){
			cin >> chapter[j];
			sum[j] = sum[j-1] + chapter[j];
		}
		cout << cdp(1,k) << '\n';
	}
	return 0;
}
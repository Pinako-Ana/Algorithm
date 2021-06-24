#include <iostream>
using namespace std;
int mymin(int a, int b){return a > b ? b : a;}

int dp[1001][3];
int house[1001][3];
int main(void){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N,res = 1000001; cin >> N;
	for (int i = 1; i <= N; i++) cin >> house[i][0] >> house[i][1] >> house[i][2];

	for (int k = 0; k < 3; k++){
		for (int i = 0; i < 3; i++)
			(k == i) ? dp[1][i] = house[1][i] : dp[1][i] = 1000001;
		
		for (int i = 2; i <= N; i++){
			dp[i][0] = mymin(dp[i-1][1],dp[i-1][2]) + house[i][0];
			dp[i][1] = mymin(dp[i-1][0],dp[i-1][2]) + house[i][1];
			dp[i][2] = mymin(dp[i-1][0],dp[i-1][1]) + house[i][2];
		}
		for (int i = 0; i < 3; i++)
			if(i != k) res = mymin(res, dp[N][i]);
	}
	cout << res;
}
#include <iostream>

using namespace std;
int n,k;
long long dp[1001][1001];

int main(void){
	cin >> n >> k;
	for (int i = 1; i <= n; i++){
		for (int l = 0; l <= k; l++){
			if (i == l || l == 0) dp[i][l] = 1;
			else dp[i][l] = dp[i-1][l] + dp[i-1][l-1];
			dp[i][l] %= 10007;
		}
	}
	cout << dp[n][k];
	return 0;
}
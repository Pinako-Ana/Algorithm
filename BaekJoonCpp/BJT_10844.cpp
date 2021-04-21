#include <iostream>

using namespace std;
long int dp[101][11];
int main(void){
	int n;
	cin >> n;
	for (int j = 1; j < 10; j++){ dp[1][j] = 1; }
	for (int i = 2; i <= n; i++){
		dp[i][0] = dp[i-1][1];
		for (int k = 1; k < 10; k++){	
			dp[i][k] = (dp[i-1][k-1] + dp[i-1][k+1]) % 1000000000;
		}
	}
	long int sum = 0;
	for (int l = 0; l < 10; l++){ sum += dp[n][l]; }
	cout << sum % 1000000000;
	return 0;
}
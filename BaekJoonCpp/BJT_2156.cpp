#include <iostream>
#include <algorithm>

using namespace std;
int dp[10001];
int main(void){
	int n;
	cin >> n;
	int wine[n+1];
	for (int i = 1; i <= n; i++){ cin >> wine[i];}
	dp[1] = wine[1];
	dp[2] = wine[1] + wine[2];
	for (int j = 3; j <= n; j++){
		dp[j]= max(dp[j-1],max(dp[j-3]+wine[j-1] + wine[j],dp[j-2] + wine[j]));
	}
	cout << dp[n];
	return 0;
}
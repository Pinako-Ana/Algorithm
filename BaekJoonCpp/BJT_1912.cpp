#include <iostream>
#include <algorithm>
using namespace std;
int dp[100000];
int main(void){
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++){ cin >> arr[i]; }
	dp[0] = arr[0];
	int ans = dp[0];
	for (int k = 1; k < n; k++){ 
		dp[k] = max(dp[k-1] + arr[k],arr[k]);
		ans = max(ans,dp[k]);
	}
	cout << ans;
	return 0;
}
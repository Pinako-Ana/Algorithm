#include <iostream>

using namespace std;
int dp[1001];
int arr[1001];

int main(void){
	int n, max = 0;
	cin >> n;
	for (int i = 1; i <= n; i++){
		cin >> arr[i];
		dp[i] = 1;
	}
	for (int j = 1; j <= n; j++){
		for (int k = 1; k < j; k++){
			if(arr[j] > arr[k] && dp[j] == dp[k])
				dp[j] = dp[k] + 1;
			// arr에서 j번째가 k보다 값이 더 큰데 dp 값은 같다? 
			// 그러면 dp[k] 에다가 1을 더 해준 값을 dp[j]에다가 넣는다
		}
		if(max < dp[j]) max = dp[j];
	}
	cout << max;
	return 0;
}
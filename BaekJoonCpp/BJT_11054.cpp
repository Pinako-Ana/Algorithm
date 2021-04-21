#include <iostream>

using namespace std;
int dp[1000];
int dpr[1000];
int sum[1000];
int main(void){
	int n;
	cin >> n;
	int arr[n];
	fill_n(dp,1001,1);
	fill_n(dpr,1001,1);
	for (int i = 0; i < n; i++){ cin >> arr[i]; }
	for (int j = 0; j < n; j++){
		for (int k = 0; k < j; k++){
			if(arr[j] > arr[k] && dp[j] == dp[k])
				dp[j] = dp[k] + 1;
		}
		sum[j] += dp[j];
		for (int l = n-1; l > n-1-j; l--){
			if(arr[n-1-j] > arr[l] && dpr[n-1-j] == dpr[l])
				dpr[n-1-j] = dpr[l] + 1;
		}
		sum[n-1-j] += dpr[n-1-j];
	}//검사를 앞에서 해주면서 동시에 뒤에서도 진행해준다 
     //dp[j]번째와 dp[n-1-j]번째 값들을 더해주는 sum이라는 배열을 만들어준다
	int max = 0;
	for (int p = 0; p < n; p++){ if(sum[p] > max) max = sum[p];}
	cout << max -1; //겹치는 값이 있으므로 1을 빼준다.
	

	return 0;
}
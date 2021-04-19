#include <iostream>

using namespace std;

int dp[500][500];
int max(int a, int b) { return a < b ? b : a;}
int main(void){
	int n, ans = 0;
	cin >> n;
	int tri[n][n];
	for (int i = 0; i < n; i++){
		for (int j = 0; j < i+1; j++){ cin >> tri[i][j]; }
	}
	dp[0][0] = tri[0][0]; //맨위 꼭지점
	for (int k = 1; k < n; k++){
		dp[k][0] = dp[k-1][0] + tri[k][0]; //양끝은 선택의 기회가 없다
		for (int j = 1; j < k; j++){
			dp[k][j] = max(dp[k-1][j-1], dp[k-1][j]) + tri[k][j];}
            //둘 중에 큰 값을 택하고 자기 자리의 값을 더해준다 
		dp[k][k] = dp[k-1][k-1] + tri[k][k];
	}
	for (int l = 0; l < n; l++){ 
		if(dp[n-1][l] >= ans) ans = dp[n-1][l];}
	cout << ans;
	return 0;
}
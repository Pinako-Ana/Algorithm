#include <iostream>

using namespace std;
int dp[1001][3];

struct RGB{
	int r;
	int g;
	int b;
};
int min(int a, int b) {return a < b ? a : b;}
int main(void){
	int n,ans= 1000001;
	cin >> n;
	RGB h[n];
	for (int i = 0; i < n; i++){ cin >> h[i].r >> h[i].g >> h[i].b; }
	dp[0][0] = h[0].r;
	dp[0][1] = h[0].g;
	dp[0][2] = h[0].b;//처음의 dp값은 지정해주고..
	for (int j = 1; j < n; j++){//여기가 핵심
		dp[j][0] = min(dp[j-1][1],dp[j-1][2]) + h[j].r;
		dp[j][1] = min(dp[j-1][0],dp[j-1][2]) + h[j].g;
		dp[j][2] = min(dp[j-1][0],dp[j-1][1]) + h[j].b;
	}// j번째에서 R을,B를 혹은 G를 택했을때 거기까지의 최소값들이
	 // dp에 담기는것임 
	for (int j = 0; j < 3; j++){
		if (dp[n-1][j] <= ans){ ans = dp[n-1][j]; }
	}
	cout << ans;
	return 0;
}
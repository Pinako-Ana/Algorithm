#include <iostream>

using namespace std;
int dp[301][2];
//dp[?][0]은 ?칸으로 한 칸 넘어온거
//dp[?][1]은 ?칸으로 두 칸 넘어온거

int max(int a, int b){return a < b ? b : a;}

int main(void){
	int n;
	cin >> n;
	int v[n+1];
	for (int i = 1; i <= n; i++) {cin >> v[i];}
	dp[0][0] = 0;
	dp[0][1] = 0;
	dp[1][0] = v[1];
	dp[1][1] = 0;
	dp[2][0] = v[1] + v[2];
	dp[2][1] = v[2];
	//2번째 칸까지 예외가 있어서 초기값을 정해줌
	for (int k = 3; k <= n; k++){
		dp[k][0] = dp[k-1][1] + v[k];
		dp[k][1] = max(dp[k-2][0],dp[k-2][1]) + v[k];
	}//3번째 칸 이후부터 전 칸의 dp[3-1][0]이 불가능함 (세칸을 움직이는거기 때문에)
	 //두 칸을 넘어서 오는거는 그 전의 칸이 한 칸 뭐로 넘어온 것이든 상관이 없으므로
	 //max값으로 비교를 해줌
	if (dp[n][0] <= dp[n][1]) cout << dp[n][1];
	else cout << dp[n][0];
	return 0;
}
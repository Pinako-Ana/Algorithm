#include <iostream>

using namespace std;

int height[501][501];//높이는 1~10000까지
int dp[501][501];
int M ,N; 
int dx[4] = {0,-1,0,1};
int dy[4] = {-1,0,1,0};

int downhill(int a, int b){//DFS 사용
	if(dp[a][b] != -1) return dp[a][b];
	if(a > M || b > N || a == 0 || b == 0) return 0;
	if(a == 1 && b == 1) return 1;
	dp[a][b] = 0;
	for (int i = 0; i < 4; i++){
		int nx = a + dx[i];
		int ny = b + dy[i];
		if(height[nx][ny] > height[a][b]) 
			dp[a][b] += downhill(nx,ny);
	}
	return dp[a][b];
}
int main(void){
	cin >> M >> N;
	for (int i = 1; i <= M; i++){
		for (int j = 1; j <= N; j++){
			cin >> height[i][j];
			dp[i][j] = -1;
		}
	}
	cout << downhill(M,N);
	return 0;
}
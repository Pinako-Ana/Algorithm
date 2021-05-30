#include <iostream>

using namespace std;

int seq[2001];
int dp[2001][2001];

int main(void){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N, M, S, E; cin >> N;
	for (int i = 1; i <= N; i++) cin >> seq[i];
	for (int i = 1; i <= N; i++) dp[i][i] = 1;
	for (int i = 1; i < N; i++) if(seq[i] == seq[i+1]) dp[i][i+1] = 1;
	for (int k = 2; k <= N-1; k++){
		for (int i = 1; i <= N-k; i++){
			if(seq[i] == seq[i + k] && dp[i+1][i + k - 1])
				dp[i][i + k] = 1; 
		}
	}
	cin >> M;
	for (int i = 0; i < M; i++){
		cin >> S >> E;
		cout << dp[S][E] << '\n';
	}
	return 0;
}
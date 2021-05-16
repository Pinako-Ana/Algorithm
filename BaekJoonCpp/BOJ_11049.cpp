#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int N;
struct matrix{
	int x,y;
};
matrix list[501];
int dp[501][501];
int mdp(int start, int end){
	if(dp[start][end] != 0) return dp[start][end];
 	if(start == end) return 0;
	else if(end - start == 1) return dp[start][end] = list[start].x * list[start].y * list[end].y;
	else{
		dp[start][end] = INT_MAX;
		for (int k = start; k < end; k++){
			dp[start][end] = min(dp[start][end], mdp(start,k) + mdp(k+1,end) + (list[start].x * list[end].y * list[k].y));
		}
	}
	return dp[start][end];
}
int main(void){
	cin >> N;
	for (int i = 1; i <= N; i++)
		cin >> list[i].x >> list[i].y;
	cout << mdp(1,N);
	return 0;
}
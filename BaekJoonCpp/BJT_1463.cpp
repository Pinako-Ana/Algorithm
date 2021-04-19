#include <iostream>
#include <algorithm>
using namespace std;
int dp[1000001];
int main(void){
	int x;
	cin >> x;
	dp[1] = 0;
	for (int i = 2; i <= x; i++){
		dp[i] = dp[i-1] + 1;//<- 얘가 가장 최댓값일거다 얘와 비교를 해주는거다
		if(i % 2 == 0) dp[i] = min(dp[i],dp[i/2]+1);
		if(i % 3 == 0) dp[i] = min(dp[i],dp[i/3]+1);
	}//둘 다 if로 해줘야하더라...
	cout << dp[x];
	return 0;
}
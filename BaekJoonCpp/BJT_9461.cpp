#include <iostream>
using namespace std;
long long int dp[101]; //long을 해줘야함
long long int pado(int a){
	for (int i = 5; i < a; i++){
		dp[i] = dp[i-1] + dp[i-5];}
    //pado의 점화식, 6번째부터는 (6-1)번째와 (6-5)번째의 합으로 이루어져있음
	return dp[a-1];
}
int main(void){
	int t;
	cin >> t;
	int n[t];
	for (int i = 0; i < t; i++){
		cin >> n[i];}
	dp[0] = 1;
	dp[1] = 1;
	dp[2] = 1;
	dp[3] = 2;
	dp[4] = 2;
	for (int j = 0; j < t; j++){
		cout << pado(n[j]) << '\n';}
	return 0;
}
#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int dp[1001][1001];
int main(void){ 
	string a,b;
	cin >> a;
	cin >> b;
	int sA = a.length();
	int sB = b.length();
	for (int i = 1; i <= sB; i++){
		for (int k = 1; k <= sA; k++){
			if(b[i-1] == a[k-1]) dp[i][k] = dp[i-1][k-1] + 1;
			else dp[i][k] = dp[i-1][k] < dp[i][k-1] ? dp[i][k-1] : dp[i-1][k] ;
		}
	}
	cout << dp[sB][sA];
	return 0;
}
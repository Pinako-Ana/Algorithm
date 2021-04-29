#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<pair <int , int> > lines;
int dp[101];
int main(void){
	int n,x,y;
	cin >> n;
	for (int i = 1; i <= n; i++){
		cin >> x >> y;
		lines.push_back(make_pair(x,y));
	}
	sort(lines.begin(),lines.end());
	//왼쪽 전봇대가 오름차순이니까 오른쪽 전봇대에서도 오름차순이기만하면
	//서로 교차하지 않는다는거다 즉 가장 많이 교차하지 않는 수를 구하고 
	//전체에서 빼면된다 
	for (int i = 0; i < n; i++){
		for (int k = 0; k < i; k++){
			if(lines[i].second > lines[k].second && dp[k] == dp[i]){
				dp[i]++;
			}
		}		
	}
	int max = 0;
	for (int i = 0; i < n; i++){
		if(dp[i] > max){ max = dp[i]; } }
	cout << n - (max + 1) ;	
	return 0;
}
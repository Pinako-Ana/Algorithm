#include <iostream>
#include <vector>
#include <cmath>
#define N 15

using namespace std;
int cnt, n;
int col[N];
vector <pair<int ,int > > a;
bool checker(int o, int p){//대각선을 검사하는거임
	for (int j = 0; j < a.size(); j++){
		if(abs(a[j].first - o) - abs(a[j].second - p) == 0) return false;
	}//여태껏 벡터에 추가된 칸들이랑 대각선상에 있는지를 비교 있으면 false반환
	return true;//없으면 true
}
void dfs(int line){
	if(line > n ){
		cnt++;
		return;
	}
	for (int i = 1; i <= n; i++){
		if(col[i] != 1 && abs(a.back().second - i) > 1 && checker(line, i)){
		//택한 열에 퀸이 없고 바로 전 퀸이랑 1이상 차이가 나며
		//대각선 상에 같은 퀸이 없을 때 실행되는 조건
			col[i] = 1;
			a.push_back(make_pair(line,i));
			dfs(line+1);
			a.pop_back();
			col[i] = 0;
		}
	}
}
int main(void){
	cin >> n;
	a.push_back(make_pair(0,-20));//체스판에 영향안주는 위치
	dfs(1);
	cout << cnt;
	return 0;
}
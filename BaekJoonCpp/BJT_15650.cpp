#include <iostream>
#include <vector>

using namespace std;
int m,n;
vector<int> s;
bool vst[9];

void dfs(int leng){
	if(leng == m){
		for (int i = 1; i <= m; i++)
			cout << s[i] << ' ';
		cout << '\n';
		return;
	}
	for (int i = 1; i <= n; i++){
		if(s.back() <= i){
			vst[i] = true;
			s.push_back(i);
			dfs(leng + 1);
			s.pop_back();
			vst[i] = false;
		}
	}
}
int main(void){
	
	cin >> n >> m;
	s.push_back(0);//벡터에다가 맨 앞에 0을 하나 넣어주었음
	dfs(0);
	return 0;
}
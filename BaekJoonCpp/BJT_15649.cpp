#include <iostream>
#include <vector>
using namespace std;
int n,m;
vector <int> vec;
bool visited[9];
void dfs(int leng){
	if(leng == m){
		for (int k = 0; k < m; k++)
			cout << vec[k] << " ";
		cout << '\n';
		return;
	}
	for (int i = 1; i <= n; i++){
		if(!visited[i]){
			visited[i] = true;
			vec.push_back(i);
			dfs(leng + 1);
			vec.pop_back();
			visited[i] = false;
		}
	}
}
int main(void){
	std::cin >> n >> m;
	dfs(0);
	return 0;
}
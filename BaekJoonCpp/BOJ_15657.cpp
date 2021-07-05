#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;
int N,M;
vector <int> arr;

void dfs(int a[],int k){
	if(arr.size() == M){
		for(int i = 0; i < M; i++) printf("%d ",arr[i]);
		printf("\n");
		return;
	}
	for(int i = k; i < N; i++){
		arr.push_back(a[i]);
		dfs(a,i);
		arr.pop_back();
	}
}
int main(void){
	scanf("%d %d" ,&N,&M);
	int p[N];
	for (int i = 0; i < N; i++) scanf("%d",&p[i]);
	sort(p,p+N);
	dfs(p,0);
}
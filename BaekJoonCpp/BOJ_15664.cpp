#include <cstdio>
#include <algorithm>
using namespace std;
int N, M, res[8];
bool check[8];
void dfs(int x[], int k ,int a){
	if(k == M){
		for (int i = 0; i < M; i++) 
			printf("%d ",res[i]);
		printf("\n");
		return;
	}
	int prev = -1;
	for (int i = a; i < N; i++){
		if(!check[i] && (prev != x[i])){
			check[i] = true;
			prev = x[i];
			res[k] = x[i];
			dfs(x, k+1,i);
			check[i] = false;
		}
	}
}
int main(void){
	scanf("%d %d",&N,&M);
	int a[N];
	for (int i = 0; i < N; i++) scanf("%d",&a[i]);
	sort(a,a+N);
	dfs(a,0,0);
}
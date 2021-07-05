#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
int N, M; 
vector <int> arr;
void dfs(int a[]){
	if(arr.size() == M){
		for (int i = 0; i < M; i++) printf("%d ",arr[i]);
		printf("\n");
		return;
	}
	for (int i = 0; i < N; i++){
		arr.push_back(a[i]);
		dfs(a);
		arr.pop_back();
	}
} 
int main(void){
	scanf("%d %d",&N,&M);
	int arr[M];
	for (int i = 0; i < N; i++) scanf("%d",&arr[i]);
	sort(arr,arr+N);
	dfs(arr);
}
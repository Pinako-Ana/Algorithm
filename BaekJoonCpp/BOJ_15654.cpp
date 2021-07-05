#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;
int N,M,x; 
int main(void){
	scanf("%d %d",&N,&M);
	vector <int> arr;
	for (int i = 0; i < N; i++){
		scanf("%d", &x);
		arr.push_back(x);
	}
	sort(arr.begin(),arr.end());
	do{
		for (int i = 0; i < M; i++)
		{
			printf("%d ",arr[i]);
		}printf("\n");
	reverse(arr.begin() + M, arr.end());
	} while (next_permutation(arr.begin(),arr.end()));
}
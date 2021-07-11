#include <cstdio>
#include <algorithm>
using namespace std;
int main(){
	int N,a[10000];scanf("%d", &N);
	for (int i = 0; i < N; i++) scanf("%d",a + i);
	if(!prev_permutation(a,a+N)) puts("-1");
	else for(int i = 0; i < N; i++) printf("%d ",a[i]);
}
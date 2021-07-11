#include <cstdio>
#include <algorithm>
using namespace std;
int main(){
	int N,i;scanf("%d", &N);
	int a[N];
	for (i = 0; i < N; i++) scanf("%d",a + i);
	if(!next_permutation(a,a+N)) puts("-1");
	else for(int i = 0; i < N; i++) printf("%d ",a[i]);
}
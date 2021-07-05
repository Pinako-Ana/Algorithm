#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;
int main(void){
	int N, M; scanf("%d %d", &N, &M);
	vector<int> a(N);
	vector <bool> b(N,false);
	for (int i = 0; i < N; i++) scanf("%d", &a[i]);
	sort(a.begin(),a.end());
	for(int i = 0 ; i < M; i++) b[i] = true;
	do{
		for(int i = 0 ; i < N ;i++)
			if(b[i] == 1) printf("%d ", a[i]);
		printf("\n");
	} while (prev_permutation(b.begin(),b.end()));
	return 0;
}
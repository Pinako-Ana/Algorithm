#include <iostream>
#include <algorithm>
using namespace std;
int A[100001];
void binarysearch(int n, int x){
	int begin = 0;
	int end = n-1;
	while(begin <= end){
		int mid = (end + begin)/2;
		if(A[mid] == x) {
			printf("1\n");
			return;
		}
		else if(A[mid] < x) begin = mid + 1;
		else if(x < A[mid]) end = mid - 1;
	}
	printf("0\n");
}
int main(){
	int N, M, p; scanf("%d",&N);
	for (int i = 0; i < N; i++) scanf("%d",&A[i]);
	sort(A,A+N);
	scanf("%d", &M);
	for (int i = 0; i < M; i++){
		scanf("%d", &p);
		binarysearch(N,p);
	}
}
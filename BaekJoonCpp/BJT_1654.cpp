#include <iostream>
#include <algorithm>
using namespace std;
long long ys[10001];
int K,N;
bool qsum(long long x){
	int k=0;
	for (int i = 0; i < K; i++){ k += (ys[i]/x); }
	return k >= N;
}
int main(){
	long long start=1, end=0 ,maxlen = 0; scanf("%d %d",&K,&N);
	long long maxk = 0;
	for (int i = 0; i < K; i++) {
		scanf("%lld",&ys[i]);
		maxk = max(maxk, ys[i]);
	}
	end = maxk;
	while (start <= end){
		long long mid = (start + end)/2;
		if(qsum(mid)){
			if(mid > maxlen) maxlen = mid;
			start = mid + 1;
		}else end = mid - 1;
	}
	printf("%lld",maxlen);
	return 0;
}
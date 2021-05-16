#include <iostream>
#include <algorithm>
using namespace std;
int main(void){
	long long N, k; cin >> N >> k;
	int start = 1, end = k;
	long long result = 0;
	while(start <= end){
		long long cnt = 0;
		long long mid = (start + end)/2;
		for (int i = 1; i <= N; i++)
			cnt += min(mid/i,N);
		if(cnt >= k){
			end = mid -1;
			result = mid;
		}else start = mid + 1;
	}
	cout << result;
	return 0;
}
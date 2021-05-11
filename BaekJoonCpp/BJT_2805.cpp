#include <iostream>

using namespace std;
long long N, M; 
long long number_of_tree[1000000];
bool cutting(long long a){
	long long k = 0;
	for (int i = 0; i < N; i++){
		k += (number_of_tree[i] > a) ? (number_of_tree[i] - a) : 0 ;
	}
	return k >= M;
}
int main(void){
	cin >> N >> M;
	long long maxlen_of_tree = 0, max_cut_length = 0;
	for (int i = 0; i < N; i++){ 
		cin >> number_of_tree[i];
		maxlen_of_tree = max(maxlen_of_tree,number_of_tree[i]);
	}
	long long start = 0, end = maxlen_of_tree;
	while (start <= end){
		long long mid = (start + end)/2;
		if(cutting(mid)){	
			if(mid > max_cut_length) max_cut_length = mid;
			start = mid + 1;
		}else end = mid - 1;
	}
	cout << max_cut_length;
	return 0;
}
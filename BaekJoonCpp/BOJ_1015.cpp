#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(void){
	int N; cin >> N;
	vector <int> a(N),b(N);
	for (int i = 0; i < N; i++) cin >> a[i];
	for (int i = 0; i < N; i++){
		b[min_element(a.begin(),a.end()) - a.begin()] = i;
		*min_element(a.begin(),a.end()) = 1001;
	}
	for (int i = 0; i < N; i++)
		cout << b[i] << " ";
	return 0;
}
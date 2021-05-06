#include <iostream>
#include <vector>
using namespace std;
vector <int> a;
int main(void){
	int n,m,k,sum = 0,count = 0; cin >> n >> m;
	for (int i = 0; i < n; i++){
		cin >> k;
		a.push_back(k);
	}
	vector<int>::iterator l,r;
	l = a.begin();
	r = a.begin();
	sum = *l;
	while (1){
		if(r == a.end()) break;
		if(sum < m){
			r++;
			sum += *r;
		}
		else if(sum >= m){
			if(sum == m) count++;
			if(l == r){
				r++;
				l++;
				sum = *l;
			}else{
				sum -= *l;
				l++;
			}
		}
	}
	cout << count;
	return 0;
}
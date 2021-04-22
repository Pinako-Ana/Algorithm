#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int a[101];
vector <int> y;
int gcd(int t, int b){ return t%b ? gcd(b,t%b) : b; }
int main(void){
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++){ scanf("%d", &a[i]);}
	sort(a,a+n);
	int m = a[1] - a[0];
	for (int k = 2; k < n; k++){ m = gcd(m, a[k]-a[k-1]); }	
	for (int i = 2; i*i <= m; i++){
		if (m % i == 0){
			y.push_back(i);
			y.push_back(m/i);
		}
	}
	y.push_back(m);
	sort(y.begin(),y.end());
	y.erase(unique(y.begin(),y.end()),y.end());
	for (int i = 0; i < y.size(); i++){
		printf("%d ",y[i]);
	}
	
	return 0;
}
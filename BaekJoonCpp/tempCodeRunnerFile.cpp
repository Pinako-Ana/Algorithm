#include <iostream>
#include <algorithm>
using namespace std;
int a[101];
int gcd(int t, int b){
	return t%b ? gcd(b,t%b) : b;
}
int main(void){
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++){ scanf("%d", &a[i]);}
	sort(a,a+n);
	int m = a[1] - a[0];
	for (int k = 2; k < n; k++){ m = gcd(m, a[k]-a[k-1]); }	
	for (int i = 2; i <= m; i++){ if(m % i == 0) printf("%d ", i);}
	return 0;
}
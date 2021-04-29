#include <iostream>

using namespace std;

int factorial(int a){
	if(a == 1) return 1;
	return a*factorial(a-1);
}
int permutation(int n, int a){
	return factorial(n) / factorial(n-a);
}
int main(void){
	int n,k; cin >> n >> k;
	if(n == k || k == 0) cout << 1;
	else cout << permutation(n,k)/factorial(k);
	return 0;
}
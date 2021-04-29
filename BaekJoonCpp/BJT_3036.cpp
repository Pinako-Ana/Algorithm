#include <iostream>

using namespace std;
int gcd(int a, int b){ return a%b ? gcd(b,a%b) : b;}
int main(void){
	int n,g;
	cin >> n;
	int ring[100];
	for (int  i = 0; i < n; i++){ cin >> ring[i];}
	for (int k = 1; k < n; k++){
		g = gcd(ring[0],ring[k]);
		cout << ring[0]/g << '/' << ring[k]/g << '\n';
	}
	return 0;
}
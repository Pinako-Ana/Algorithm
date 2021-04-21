#include <iostream>

int gcd(int x, int y){
	if(y == 0) return x;
	return gcd(y,x%y);
}
int main(void){
	int t;
	std::cin >> t;
	int a[t];
	int b[t];
	for (int i = 0; i < t; i++){std::cin >> a[i] >> b[i];}
	for (int j = 0; j < t; j++){ 
		std::cout << a[j]*b[j]/gcd(a[j],b[j]) << '\n';
	}
	return 0;
}
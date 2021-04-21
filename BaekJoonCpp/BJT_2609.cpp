#include <iostream>

int findgcd(int a, int b){
	if(b == 0) return a;
	return findgcd(b,a%b);
}
int main(void){
	int x,y,gcd;
	std::cin >> x >> y;
	gcd = findgcd(x,y);
	std::cout << gcd << '\n';
	std::cout << x * y / gcd;
	return 0;
}
#include <iostream>
using namespace std;
long long calc(int *x,int y,int *z){
	if (y == 1) return (*x % *z); 
	else{
		if (y%2) return ((calc(x,y/2,z) * calc(x,y/2 + 1, z)) % *z);
		else return ((calc(x,y/2,z) * calc(x,y/2, z)) % *z);
	}
}
int main(void){
	int a, b, c; scanf("%d %d %d", &a,&b,&c);
	printf("%lld", calc(&a,b,&c));
	return 0;
}
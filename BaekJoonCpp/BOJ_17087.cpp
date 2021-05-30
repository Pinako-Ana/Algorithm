#include <iostream> 
#include <cmath>
using namespace std;
int gcd(int a, int b){
	int n ,exp = 0;
	while(~(a|b) & 1){
		exp++;
		a >>= 1;
		b >>= 1;
	}
	while(a * b){
		while (~a & 1) a >>= 1;
		while (~b & 1) b >>= 1;
		if(a > b) a -= b;
		else b -= a;
	}
	if(a) n = a;
	else n = b;
	return n << exp;
}
int main(void){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, S, x,k; cin >> N >> S;
	int a[N];
	for (int i = 0; i < N; i++){
		cin >> a[i];
		a[i] = abs(a[i] - S);
	}//a배열에는 거리의 차이가 저장되어있음 이 수들의 최대공약수를 구하면 끝

	x = a[0];
	for (int i = 1; i < N; i++){
		k = gcd(x, a[i]);
		x = k;
	}
	cout << x;
	
	return 0;
}
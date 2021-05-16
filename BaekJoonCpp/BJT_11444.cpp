#include <iostream>
using namespace std;
long long p = 1000000007;
long long answer[2][2] = {{1,0},{0,1}};
long long E[2][2] = {{1,1},{1,0}};
long long temp[2][2];
void matpow(long long a[2][2], long long b[2][2]){
	for (int i = 0; i < 2; i++){
		for (int j = 0; j < 2; j++){
			temp[i][j] = 0;
			for (int k = 0; k < 2; k++){
				temp[i][j] += (a[i][k] * b[k][j])%p;
			}
			temp[i][j] %= p;
		}
	}
	for (int i = 0; i < 2; i++){
		for (int j = 0; j < 2; j++){
			a[i][j] = temp[i][j];}}
}
int main(){
	long long n; cin >> n;
	while(n > 0){
		if(n%2) matpow(answer,E);
		matpow(E,E);
		n /= 2;
	}
	cout << answer[1][0];
	return 0;
}
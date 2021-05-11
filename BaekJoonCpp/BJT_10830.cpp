#include <iostream>
using namespace std;
long long N, B; 
long long A[5][5];
long long T[5][5];
long long result[5][5];
void matpow(long long x[5][5], long long y[5][5]){
	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++){
			T[i][j] = 0;
			for (int k = 0; k < N; k++){
				T[i][j] += (x[i][k] * y[k][j])%1000;
			}
			T[i][j] %= 1000;
		}
	}
	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++){
			x[i][j] = T[i][j];
		}
	}
}
void search(long long p){
	while(p > 0){
		if(p%2) matpow(result, A);
		matpow(A,A);
		p /= 2;
	}
}
int main(void){
	cin >> N >> B;
	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++){
			cin >> A[i][j];
		}
		result[i][i] = 1;
	}
	search(B);
	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++){
			cout << result[i][j] << " ";
		}
		cout << '\n';
	}
	return 0;
}
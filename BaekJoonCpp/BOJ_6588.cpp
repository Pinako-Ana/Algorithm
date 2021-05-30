#include <iostream> 
#include <cmath>

using namespace std;

bool isprime(int a){
	for (int i = 2; i <= (int)sqrt(a); i++)
		if(a % i == 0) return false;
	return true;
}

int main(void){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int k;
	while(1){
		cin >> k;
		if(k == 0) break;
		for (int i = 2; i < k; i++){
			if(isprime(i) && isprime(k-i)){
				cout << k << " = " << i << " + " << k - i << '\n';
				break;
			}
		}
	}
	return 0;
}
#include <iostream>
using namespace std;
int zero[41];
int one[41];

int fibonaccizero(int n){
    if(n == 0)
        return 1;
    if(n == 1)
        return 0;
    if(zero[n] != 0)
        return zero[n];
    return zero[n] = fibonaccizero(n-1) + fibonaccizero(n-2);
}
int fibonaccione(int n){
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    if(one[n] != 0)
        return one[n];
    return one[n] = fibonaccione(n-1) + fibonaccione(n-2);
}
int main(void){
    int t,num;
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> num;
        cout << fibonaccizero(num) << " " << fibonaccione(num) << '\n';
    }
	return 0;
}
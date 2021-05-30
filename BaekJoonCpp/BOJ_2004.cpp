#include <iostream> 
using namespace std;
long ntf(long a, int k){
	long x=0;
	for (long i = k; i <= a; i *= k) x += a/i;
	return x;
}
int main(void){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long q,w; cin >> q >> w;
	long two, five;
	two = ntf(q,2)-ntf(q-w,2)-ntf(w,2);
	five = ntf(q,5)-ntf(q-w,5)-ntf(w,5);
	cout << (two > five ? five : two);
	return 0;
}
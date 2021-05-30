#include <iostream>
#include <string>
using namespace std;

int main(void){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string a,b,c,d;
	cin >> a >> b >> c >> d;
	a += b;
	c += d;
	cout << stol(a) + stol(c);
	return 0;
}



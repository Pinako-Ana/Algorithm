#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main(void){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string N;
	int B; cin >> N >> B;
	int k = 1,sum = 0;
	for (auto i = N.rbegin(); i != N.rend(); i++){
		if(isalpha(*i)) sum += (*i - 'A' + 10) * k;
		else sum += (*i - '0') * k;
		k *= B;
	}
	cout << sum;
	return 0;
}
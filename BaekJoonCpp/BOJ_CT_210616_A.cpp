#include <iostream> 
#include <string>
using namespace std;
int main(void){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N;
	string str;
	cin >> N >> str;
	str = str.substr(N - 5, 5);
	cout << str;
	return 0;
}
#include <iostream>
#include <string>

using namespace std;

int main(void){
	int n;
	cin >> n;
	n--;
	string m = to_string(n);
	string result = m.append("666");
	cout << result;
	return 0;
}
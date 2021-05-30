#include <iostream> 
#include <bitset>
#include <string>
using namespace std;
int main(void){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	bitset <3> a;
	bitset <2> b;
	int k = 1;
	string str, res = ""; cin >> str;
	if(str == "0") res = '0';
	else{
		if((str[0] - '0') > 3) k = 0;
		else if((str[0] - '0') == 1) res = '1';
		else {
			b = str[0] - '0';
			res += b.to_string();
		}
		for (int i = k; i < str.length(); i++){
			a = (7 & (str[i] - '0'));
			res += a.to_string();
		}	
	}
	cout << res;
	return 0;
}
#include <iostream> 
#include <string>

using namespace std;
int main(void){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int len; cin >> len;
	string ans,test,str; cin >> str;
	if(len <= 25) cout << str;
	else {
		test = str.substr(11, (len - 11) - 11);
		int pos = test.find(".");
		if(pos == test.length()-1 || pos == string::npos)
			ans = str.replace(11,(len - 11) - 11,"...");
		else ans = str.replace(9,(len - 10) - 9,"......");
	}
	cout << ans;
}
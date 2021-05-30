#include <iostream> 
#include <stack>
#include <string>
#include <cctype>
using namespace std;
stack <char> a;
string str,res;
void makereverse(){
	while(!a.empty()){
		res += a.top();
		a.pop();
	}
}
int main(void){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	bool on = false;
	getline(cin, str);
	str += ' ';
	for (int i = 0; i < str.length(); i++){
		if(on) {
			res += str[i];
			if(str[i] == '>') on = false;
			continue;
		}
		if(isalnum(str[i])) a.push(str[i]);
		else{
			if(str[i] == '<') {
				if(!a.empty()) makereverse();
				on = true;
				res += str[i];	
			}
			else if(str[i] == ' '){
				makereverse();
				res += ' ';
			}
		}
	}
	cout << res;
	return 0;
}
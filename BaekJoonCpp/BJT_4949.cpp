#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main(void){
	string st;
	while (1){
		getline(cin, st);
		stack <char> a;
		bool success = true;
		if(st.size() == 1 && st[0] == '.') break;
		for (int i = 0; i < st.length(); i++){
			if(st[i] == '(' || st[i] == '[') a.push(st[i]);
			if(st[i] == ')') {
				if(!a.empty() && a.top() == '(') {
					a.pop();
					continue;
				}else{ 
					success = false; 
					break;
				}
			}
			if(st[i] == ']') {
				if(!a.empty() && a.top() == '[') {
					a.pop();
					continue;
				}else{ 
					success = false; 
					break;
				}
			}
		}
		if(success && a.size() == 0) cout << "yes" << '\n';
		else cout << "no" << '\n';
	}
	return 0;
}
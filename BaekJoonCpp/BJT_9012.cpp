#include <iostream>
#include <string>
#include <stack>
using namespace std;
void vpsCheck(string a){
	int i = 0;
	stack <char> vps;
	while(i<a.length()){
		if(a[i] == '(') vps.push('(');
		if(a[i] == ')'){
			if(!vps.empty()){
				if(vps.top() == '('){ vps.pop();}}
			else vps.push(')');
		}
		i++;
	}
	if (vps.empty()) cout << "YES" << '\n';
	else cout << "NO" << '\n';
}
int main(void){
	int n; cin >> n;
	string x;
	for (int i = 0; i < n; i++){
		cin >> x;
		vpsCheck(x);
	}
	return 0;
}
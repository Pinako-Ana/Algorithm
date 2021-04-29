#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(void){
	ios_base :: sync_with_stdio(false); 
	cin.tie(NULL); 
	cout.tie(NULL);
	int num,n; cin >> n;
	string inst;
	stack <int > hi;
	for (int i = 0; i < n; i++){
		cin >> inst;
		if(inst == "push"){
			cin >> num;
			hi.push(num);
		}else if (inst == "size") 
			cout << hi.size() << '\n';
		else if(inst == "pop"){
			if(!hi.empty()){
				cout << hi.top() << '\n';
				hi.pop();
			}
			else cout << -1 << '\n';
		}else if(inst == "top"){
			if(!hi.empty()) cout << hi.top() << '\n';
			else cout << -1 << '\n';
		}else if(inst == "empty") cout << hi.empty() << '\n';
	}
	return 0;
}
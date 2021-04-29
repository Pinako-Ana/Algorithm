#include <iostream>
#include <queue>
using namespace std;
queue <int> a;
int main(void){
	ios_base :: sync_with_stdio(false); 
	cin.tie(NULL); 
	cout.tie(NULL);	
	int n,num; cin >> n;
	string x;
	for (int i = 0; i < n; i++){
		cin >> x;
		if(x[1] == 'u'){
			cin >> num;
			a.push(num);
		}else if(x[1] == 'o'){
			if(a.empty()) cout << -1 << '\n';
			else{ cout << a.front() << '\n'; a.pop();} 
		}else if(x[1] == 'i'){
			cout << a.size() << '\n';
		}else if(x[1] == 'm'){
			cout << a.empty() << '\n';
		}else if(x[1] == 'r'){
			if(!a.empty()) cout << a.front() << '\n';
			else cout << -1 << '\n';
		}else if(x[1] == 'a'){
			if(!a.empty()) cout << a.back() << '\n';
			else cout << -1 << '\n';
		}
	}
	return 0;
}
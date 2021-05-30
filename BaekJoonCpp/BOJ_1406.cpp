#include <iostream> 
#include <string>
#include <list>

using namespace std;


int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	list <char> a;
	string x,cmd,res = ""; cin >> x;
	
	for (int i = 0; i < x.length(); i++)
		a.push_back(x[i]);
	
	list<char>::iterator it = a.end();
	int M; cin >> M;
	cin.ignore();
	cout << '\n';
	cout << "초기 it주소 " << &it << '\n';
	cout << "초기 it값 " << *it << '\n';
	for (int i = 0; i < M; i++){
		getline(cin, cmd);
		if(cmd[0] == 'L'){
			if(it != a.begin()) 
				it--;
		}else if(cmd[0] == 'D'){
			if(it != a.end())
				it++;
		}else if(cmd[0] == 'B'){
			if(it != a.begin()) 
				it = a.erase(--it); 
		}else{
			a.insert(it,cmd[2]);
			cout << "P 실행 후 it주소 "<< &it << '\n';
			cout << "P 실행 후 it의 값 " << *it << '\n';
		}
	}
	it = a.end();
	cout << "리스트의 end주소 "<< &it << '\n';
	cout << "리스트의 end의 값" << *it << '\n';
	for (auto i = a.begin(); i != a.end(); i++){
		cout << *i;
	}
	
	return 0;
}
#include <iostream>
#include <map>

using namespace std;
map <string, int > m;
map <string, int>::iterator iter; //map반복자
int main(void){
	int n,sum,test;cin >> test;
	string item, key;
	for (int i = 0; i < test; i++){
		cin >> n;
		m.clear();
		sum = 1;
		for (int i = 0; i < n; i++){
			cin >> item >> key;
			if(m.find(key) != m.end()) m[key]++;	
			else m.insert(make_pair(key,1));
		}
		for(iter = m.begin(); iter != m.end(); iter++){
			sum *= ((iter->second) + 1);
		}//key 의 value값에 +1해준거 끼리 곱해준거에서 -1해줘야함
		cout << sum - 1 << "\n";
	}
	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;
vector <pair< int , int > > a;
stack <pair< int , int > > k;

bool compare(pair<int ,int> x, pair<int, int> y){
	if(x.second == y.second)
		return x.first < y.first;
	else return x.second < y.second;
}
int main(void){
	int n,x,y,cnt,max = 0;
	cin >> n;
	for (int i = 0; i < n; i++){ 
		cin >> x >> y;
		a.push_back(make_pair(x,y));
	}	
	sort(a.begin(),a.end(),compare);
	k.push(a[0]);
	for (int l = 1; l < n; l++){
		if(k.top().second <= a[l].first){ 
			k.push(a[l]);//스택에 있는놈의 세컨보다 크거나 같은 퍼스트가 와야함
		}
	}//생각보다 간단하다 끝나는 시간순으로 정렬을 해주고 
	 //빨리 끝나는것들부터 차곡차곡 스택에 집어넣는다
	cout << k.size();
	return 0;
}

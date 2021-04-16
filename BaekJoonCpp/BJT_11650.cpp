#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector <pair<int, int> > a;
bool compare(pair<int,int> q, pair<int,int> w){
	if(q.first == w.first) 
		return q.second < w.second;
	else 
		return q.first < w.first;
}
int main(void){
	int n,x,y;
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		scanf("%d %d", &x,&y);
		a.push_back(make_pair(x,y));
	}
	sort(a.begin(),a.end());
	for (int l = 0; l < n; l++){
		printf("%d %d\n", a[l].first,a[l].second);
	}
	return 0;
}
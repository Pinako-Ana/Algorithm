#include <iostream>
#include <map>
using namespace std;
map<int, int> sk;
int main(){
	int n,m,x,p; scanf("%d", &n);
	for (int i = 0; i < n; i++){
		scanf("%d",&x);
		sk[x]++;
	}//맵에 잘 들어가는거 확인했음
	scanf("%d",&m);
	int card[m];
	map<int,int>::iterator it;
	for (int i = 0; i < m; i++) {
		scanf("%d", &p);
		it = sk.find(p);
		if(it != sk.end()) printf("%d ", it->second);
		else printf("0 ");
	}
	return 0;
}
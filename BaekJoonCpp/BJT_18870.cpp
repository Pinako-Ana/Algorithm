#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void){
	int n;
	scanf("%d",&n);
	vector<int> ogv(n);
	for (int i = 0; i < n; i++) scanf("%d",&ogv[i]);
	vector<int> cpv(ogv);
	sort(cpv.begin(),cpv.end());
	cpv.erase(unique(cpv.begin(),cpv.end()),cpv.end());
	//중복이 제거된 놈들만 남았다
	for (int i = 0; i < n; i++){
		auto po = lower_bound(cpv.begin(),cpv.end(),ogv[i]);
		cout << po - cpv.begin() << " ";
	}//auto 대신 뭘 쓸 수 있는거지...?
	return 0;
}
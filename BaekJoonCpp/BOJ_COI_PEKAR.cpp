#include <iostream>
#include <vector> 

using namespace std;
struct frship{ int fst,snd;};
vector <frship> frshiplist;
int main(void){
	int n, m,a,b; cin >> n >> m;
	frship one;
	for (int i = 0; i < m; i++){
		cin >> one.fst >> one.snd;
		frshiplist.push_back(one);
	}
	
	
	return 0;
}

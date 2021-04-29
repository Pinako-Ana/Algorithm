#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <unordered_map>

using namespace std;

int main(void){
	// int myints[] = {10, 20, 30, 40,50,60,70,80,90};
	// int i;
	// for (i = 0; i < 9; ++i) {
	// 	cout << myints[i] << ' ';
	// 	cout << i << '\n';
	// }
	// cout << i;

	set <int> ag;

	ag.insert(4);
	ag.insert(6);
	ag.insert(60);
	// set<int>::iterator it;
	// for (auto it = ag.begin(); it != ag.end(); it++){
	// 	cout << *it << ' ';
	// }
	unordered_map <string ,int > mappp;
	
		mappp["hello"]++;
	mappp.erase("hello");


	cout << mappp["heo"];
}
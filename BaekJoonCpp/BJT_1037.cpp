#include <iostream>
#include <algorithm>

using namespace std;
signed int glist[50];

int main(void){
	int g;
	cin >> g;
	for (int i = 0; i < g; i++){cin >> glist[i];}
	sort(glist,glist+g);
	g % 2 == 0 ? cout << glist[0] * glist[g-1] : cout << glist[g/2] * glist[g/2];
	return 0;
}
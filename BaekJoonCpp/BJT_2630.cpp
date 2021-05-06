#include <iostream>
using namespace std;
int white = 0, blue = 0;
int paper[128][128];
void findbluewhite(int x, int y, int z){
	int elmt, cnt = 0;
	elmt = paper[x][y];
	for (int i = x; i < x+z; i++){
		for (int j = y; j < y+z; j++){
			if(elmt == paper[i][j]) cnt++;
			else cnt = 0;
		}
		if(cnt == 0) break;
	}
	if(cnt == z*z) {
		if(elmt == 1) blue++;
		else white++;
	}else{
		findbluewhite(x,y,z/2);
		findbluewhite(x+z/2,y,z/2);
		findbluewhite(x,y+z/2,z/2);
		findbluewhite(x+z/2,y+z/2,z/2);
	}
}
int main(void){
	int n; cin >> n;
	for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) cin >> paper[i][j];
	findbluewhite(0,0,n);
	cout << white << '\n' << blue;
	return 0;
}
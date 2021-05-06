#include <iostream>
using namespace std;
int a[2187][2187];
int minum,zero,plnum;
void trisearch(int x, int y, int z){
	int cnt = 0, elmt = a[x][y];
	bool check = true;
	for (int i = x; i < x + z; i++){
		for (int j = y; j < y+z; j++){
			if(elmt == a[i][j]) continue;
			else check = false;
		}
		if(check == false) break;
	}
	if(check == true) {
		if(elmt == -1) minum++;
		if(elmt == 0) zero++;
		if(elmt == 1) plnum++;
	}else{
		trisearch(x,y,z/3);
		trisearch(x,y+z/3,z/3);
		trisearch(x,y+2*z/3,z/3);
		trisearch(x+z/3,y,z/3);
		trisearch(x+z/3,y+z/3,z/3);
		trisearch(x+z/3,y+2*z/3,z/3);
		trisearch(x+2*z/3,y,z/3);
		trisearch(x+2*z/3,y+z/3,z/3);
		trisearch(x+2*z/3,y+2*z/3,z/3);
	}	
}
int main(void){
	int n; cin >> n;
	for (int  i = 0; i < n; i++){
		for (int j = 0; j < n; j++){ cin >> a[i][j];}}
	trisearch(0,0,n);
	cout << minum << '\n' << zero << '\n' << plnum;
	return 0;
}
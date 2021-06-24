#include <iostream>
using namespace std;
int n;
char bb[50][50];
void swap(int *a, int *b){
	char temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
int mymax(int a, int b){return a > b ? a : b;}
int check(){
	int leng = 0;
	char arr[4] = {'C','P','Z','Y'};
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < n; j++){
			int maxleng = 0;
			for (int k = 0; k < n; k++){
				if(bb[j][k] == arr[i]) maxleng++;
				else {
					leng = mymax(leng,maxleng);
					maxleng = 0;
				}
			}
			leng = mymax(leng,maxleng);
			if(leng == n) return leng;
		}
		for (int j = 0; j < n; j++){
			int maxleng = 0;
			for (int k = 0; k < n; k++){
				if(bb[k][j] == arr[i]) maxleng++;
				else maxleng = 0;
			}
			leng = mymax(leng,maxleng);
			if(leng == n) return leng;
		}
	}
	return leng;
}
int main(void){
	int res = 0; cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> bb[i][j];
	if(check() == n) cout << n;
	else{
		for (int i = 0; i < n; i++){
			for (int j = 0; j < n-1; j++){
				if (bb[i][j] != bb[i][j+1]){
					swap(bb[i][j],bb[i][j+1]);
					res = mymax(res,check());
					if(res == n) break;
					swap(bb[i][j],bb[i][j+1]);
				}
				if (bb[j][i] != bb[j+1][i]){
					swap(bb[j][i],bb[j+1][i]);
					res = mymax(res,check());
					if(res == n) break;
					swap(bb[j][i],bb[j+1][i]);
				}
			}
			if(res == n) break;
		}
		cout << res;
	}
	return 0;
}
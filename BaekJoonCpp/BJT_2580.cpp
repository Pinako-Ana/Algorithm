#include <iostream>

using namespace std;
int cnt = 81;
int s[9][9];

bool check(int h, int v, int num){//수평,수직,9칸 검사를함
	for (int i = 0; i < 9; i++){
		if(s[h][i] == num || s[i][v] == num) return false;
	}
	int x = (h/3) * 3;
	int y = (v/3) * 3;;
	for (int i = x; i <= x+2; i++){
		for (int j = y; j <= y+2; j++){
			if(s[i][j] == num) return false;}
	}return true;//세 조건들에서 안걸려야 true반환해줌
}
void dfs(int time){
	int j =	time/9;
	int k = time%9;
	if(time == cnt){
		for (int i = 0; i < 9; i++){
			for (int p = 0; p < 9; p++){cout << s[i][p] << ' ';}
			cout << '\n';
		}
		exit(0);
	}
	if(s[j][k] == 0){
		for (int l = 1; l <= 9; l++){
			if(check(j,k,l)){//이게 참이면 숫자 넣어도 된다
				s[j][k] = l;
				dfs(time + 1);
				s[j][k] = 0; //다시 0으로 해줘야함
			}	
		}
	}else dfs(time + 1);
}
int main(void){
	ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	for (int i = 0; i < 9; i++){
		for (int l = 0; l < 9; l++){cin >> s[i][l];}
	}
	dfs(0);
	return 0;
}
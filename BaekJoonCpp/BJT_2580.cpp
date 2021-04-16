#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int cnt;
vector <pair < pair<int, int>,int > > v;
int s[10][10];

bool hzt(int horizontal, int num){
	find()
	
	return false;
}

bool vtc(int vertical, int num){
	return false;
}

bool nine(int hor, int ver, int num){
	return false;
}



void dfs(int time){
	if(time == cnt+1){
		for (int i = 1; i < 10; i++){
			for (int l = 1; l < 10; l++){
				cout << s[i][l] << ' ';
			}
			cout << '\n';
		}
		return;
	}
	for (int j = 1; j <= 9; j++){
		for (int k = 1; k <= 9; k++){
			for (int l = 1; l <= 9; l++){
				if(s[j][k] == 0 && hzt(j,l) && vtc(k,l) && nine(j,k,l)){
					s[j][k] = l;
					dfs(time++);
					s[j][k] = 0;
				}
			}
		}
	}
}

int main(void){
	for (int i = 0; i < 9; i++){
		for (int l = 0; l < 9; l++){
			cin >> s[i][l];
			if(s[i][l] == 0)
				cnt++;
		}
	}
	

	dfs(1);

	return 0;
}
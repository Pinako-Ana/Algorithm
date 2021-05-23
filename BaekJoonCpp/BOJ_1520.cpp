#include <iostream>

using namespace std;

int height[501][501];//높이는 1~10000까지
int main(void){
	int M ,N; cin >> M >> N;
	for (int i = 1; i <= M; i++)
		for (int j = 1; j <= N; j++)
			cin >> height[i][j];
	

	return 0;
}
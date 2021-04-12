#include <iostream>

using namespace std;
string chess[50];
int main(void){
	int row, cul,min;
	string a[8] = {"WBWBWBWB",
				   "BWBWBWBW",
				   "WBWBWBWB",
				   "BWBWBWBW",
				   "WBWBWBWB",
				   "BWBWBWBW",
				   "WBWBWBWB",
				   "BWBWBWBW"}; //흰색으로 시작하는 체스판
	int cnt;
	min = 65;
	cin >> row >> cul;
	for (int i = 0; i < row; i++){
		cin >> chess[i];
	}
	for (int  i = 0; i < row - 7; i++){
		for (int k = 0; k < cul -7; k++){
			cnt = 0;
			for (int  j = 0; j <8; j++){
				for (int l = 0; l < 8; l++){
					if(chess[i+j][k+l] != a[j][l]){cnt++;}
				}//이 부분이 핵심
			}
			if(cnt <= 32 && cnt < min) min = cnt;
			else if((cnt > 32) && (64-cnt) < min) min = 64-cnt;
			//64 - 하얀색으로 시작한 체스판에서 다시 칠해야 하는 개수 = 검정색으로 시작한 체스판에서 다시 칠해야 하는 개수
		}	//다시칠해야 하는 개수가 32개가 넘어가면 검정색으로 시작할때가 더 낫다는 뜻이므로 그거까지 비교해줌 
	}
	cout << min;
	return 0;
}
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
vector<int> button;
string str;
// int sameFstNum(string &a){
	
// 	if(
// }
int belowFstNum(string &a){
	int res = INT_MAX, pos;
	if()
	pos = lower_bound(button.begin(),button.end(),a)
	
}
int aboveFstNum(string &a){}




int mymin(int x, int y){return x > y ? y : x;}
int main(void){
	int N, M,bb,res; scanf("%d",&N);
	scanf("%d",&M);
	int brokenButton[10] = {0,1,2,3,4,5,6,7,8,9};

	if(M != 0){
		for(int i = 0; i < M; i++) {
		scanf("%d",&bb);
		brokenButton[bb] = -1;
		}
	}

	for(int i = 0; i < 10; i++) if(brokenButton[i] != -1) button.push_back(brokenButton[i]);
	

	//4334 일때 
	//버튼에 4가 있다면 
	//둘째 자리 3과 가까운수, 셋째자리와 가까운 수 ---이렇게 구해
	//근데 가까운 수라는게 작은거, 큰거 같은 거 나올 수 있으므로 
	//함수 과정에서 두개로 나뉠수도


	//버튼에 4가 없다면
	//4보다 바로작거나 바로 큰 수가 제일 앞자리 되고 
	// 4보다 작을 경우엔 4 다음으로 제일 큰 수들만 오고
	//5가일경우엔 5다음으로 제일 작은 수들만 오는것

	//위의 두 과정과 하나씩 채널변경한 횟수와 비교 해서 나온 것 중 최솟값


	
	if(button.size() == 0) res = abs(N - 100);
	else{
		str = to_string(N);
		int a1,a2,a3,a4;
		a1 = sameFstNum(str);
		a2 = belowFstNum(str);
		a3 = aboveFstNum(str);
		a4 = abs(N - 100);
		
		for (int i = 0; i < button.size(); i++)
		{
			cout << button[i] << " ";
		}
		cout << '\n';
		res = mymin(mymin(a1,a2),mymin(a3,a4));
		// cout << mymin(mymin(a1,a2),mymin(a3,a4));
	}
	
}
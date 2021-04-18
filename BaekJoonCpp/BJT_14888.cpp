#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int num[11];
int op[4];
int n;
vector < int > result;//나누기와 곱하기 때문에 연산된 순서대로 값을 벡터에 저장해주기로 함
vector < int > answerlist;//최종 결과값들이 모이는 벡터

void calculator(int a ,int pos){//벡터함수들을 잘 활용하자
	int b = result.back();
	switch (pos){
	case 0:
		result.push_back(b+num[a]);
		break;
	case 1:
		result.push_back(b-num[a]);
		break;
	case 2:
		result.push_back(b*num[a]);
		break;
	case 3:
		result.push_back(b/num[a]);
		break;
	}
}
void dfs(int cnt){
	if (cnt == n){//cnt는 연산자 사용횟수임 n과 같아지면 결과값을 answerlist에 저장
		answerlist.push_back(result.back());
		return;
	}
	for (int i = 0; i < 4; i++){
		if(op[i] >= 1){
			op[i]--;
			calculator(cnt,i);
			dfs(cnt + 1);
			op[i]++;
			result.pop_back();
		}	
	}
}
int main(void){
	cin >> n;
	for (int i = 0; i < n; i++){cin >> num[i];}
	for (int l = 0; l < 4; l++){cin >> op[l];}
	result.push_back(num[0]);//num[0]을 result의 초기값으로 미리 저장
	dfs(1);
	sort(answerlist.begin(),answerlist.end());//오름차순나열 해준후 양쪽값을 출력하면된다
	cout << answerlist.back() << '\n';
	cout << answerlist.front() << '\n';
	return 0;
}
	
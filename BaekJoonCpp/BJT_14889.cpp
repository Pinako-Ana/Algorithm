#include <iostream>
#include <vector>
#include <algorithm>
#define MAX 21

using namespace std;

int n;
int arr[MAX][MAX];

//1이들어간 팀 안들어간팀 이렇게 구분했다 (반으로 나눠지는것이므로)
vector <int> starteam; //1이 들어가는 팀의 조합마다의 Sij의 합
vector <int> linkteam; 

int list[MAX]; //n/2 만큼의 조합들 구할때 쓰는 배열
vector <int> pairlist; // n/2길이의 조합 

int list2[MAX]; //Sij구하려고 만든 배열
vector <int> couple;// n/2길이의 조합을 가지고 또 거기서 2개씩 뽑는 조합을 만듬

int sum = 0 ;
void cp(int x){
	if(x > 2){
		sum += arr[couple[1]][couple[2]] + arr[couple[2]][couple[1]];
		return;// sum에는 n/2 길이의 조합 당 Sij의 값들이 추가됨
	}
	for (int k = 1; k <= n/2; k++){
		if(list2[k] == 0 && couple.back() < pairlist[k]){
			list2[k] = 1;
			couple.push_back(pairlist[k]);
			cp(x + 1);
			couple.pop_back();
			list2[k] = 0;
		}
	}
}
void dfs(int times){
	if(times > n/2){
		cp(1);
		if(pairlist[1] == 1)//1을 기준으로 나눠서 담을 것이므로
			starteam.push_back(sum);
		else 
			linkteam.push_back(sum);
		sum = 0; //꼭 초기화해줘야함
		return;
	}
	for (int i = 1; i <= n; i++){
		if(list[i] == 0 && pairlist.back() < i){
			list[i] = 1;
			pairlist.push_back(i);
			dfs(times + 1);
			pairlist.pop_back();
			list[i] = 0;
		}
	}
}
int main(void){
	cin >> n;
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= n; j++){cin >> arr[i][j];}}
	pairlist.push_back(-1);
	couple.push_back(-1);
	dfs(1);
	reverse(linkteam.begin(),linkteam.end());//123일때 456이다 즉 링크팀을 리버스 해줘야 서로의 팀간의 능력 차이를 구할 수 있다
	int minimum = 10000000;
	for (int j = 0; j < starteam.size(); j++){
		int a = abs(starteam[j] -linkteam[j]);
		if(minimum > a)
			minimum = a;
	}
	cout << minimum;
	return 0;
}
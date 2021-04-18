#include <iostream>
#include <vector>
#include <algorithm>
#define MAX 21

using namespace std;

int n;
int arr[MAX][MAX];
vector <int> starteam;
vector <int> linkteam;
int list[MAX];
vector <int> pairlist;

int list2[MAX];
vector <int> couple;

int sum = 0 ;
void cp(int x){
	
	if(x > 2){
		sum += arr[couple[1]][couple[2]] + arr[couple[2]][couple[1]];
		return;
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
		if(pairlist[1] == 1)
			starteam.push_back(sum);
		else
			linkteam.push_back(sum);
		sum = 0;
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
	reverse(linkteam.begin(),linkteam.end());
	int minimum = 10000000;
	
	for (int j = 0; j < starteam.size(); j++){
		if(minimum > abs(starteam[j] -linkteam[j]))
			minimum = abs(starteam[j] -linkteam[j]);
	}
	cout << minimum;
	
	

	
	return 0;
}
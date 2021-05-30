#include <iostream>
#include <vector>

using namespace std;
vector <int> graph[101];//컴퓨터의 번호당 연결된 컴퓨터들이 저장됨
bool infected[101]; //true면 감염

void wormVirus(int a){//a부터 바이러스가 시작됨
	infected[a] = true;
	for (int i = 0; i < graph[a].size(); i++){
		if(infected[graph[a][i]] == true) continue;
		else wormVirus(graph[a][i]);
	}
}
int cntDmgUser(int a){//감염된 수를 세고 감염원 컴퓨터개수 1을 빼줌
	int cnt = 0;
	for (int i = 1; i <= a; i++)
		if(infected[i] == true) cnt++;
	return cnt - 1;
}

int main(void){
	int numOfCom, numOfPair, x,y;
	cin >> numOfCom >> numOfPair;
	for (int i = 1; i <= numOfPair; i++){
		cin >> x >> y;
		graph[x].push_back(y);
		graph[y].push_back(x);
	}
	wormVirus(1);
	cout << cntDmgUser(numOfCom);
	return 0;
}
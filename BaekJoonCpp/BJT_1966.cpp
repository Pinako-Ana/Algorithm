#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int main(int argc, char const *argv[]){
	int testcase; cin >> testcase;
	int n, index, prio;
	for (int i = 0; i < testcase; i++){
		int cnt = 0;
		priority_queue <int> prq;//우선순위만 나와
		queue <pair<int, int> > que; //우선순위와 index가 같이 들어감
		cin >> n >> index;
		for (int k = 0; k < n; k++){
			cin >> prio;
			prq.push(prio);
			que.push(make_pair(prio,k));
		}
		while(1){
			if(prq.top() == que.front().first){
				if(que.front().second == index){
					cnt++;
					cout << cnt << '\n';
					break;
				}else{
					prq.pop();
					que.pop();
					cnt++;
				}
			}else{
				que.push(que.front());
				que.pop();
			}
		}
	}
	return 0;
}

#include <iostream>
#include <deque>

using namespace std;
deque <int> dq;
int mCon[50];
int main(void){//회전하는 큐
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int cnt = 0 ,N, M; cin >> N >> M;
	for (int i = 0; i < M; i++)
		cin >> mCon[i];
	for (int i = 1; i <= N; i++)
		dq.push_back(i);
	deque<int>::iterator it;
	for (int i = 0; i < M; i++){
		for (it = dq.begin() ; it < dq.end(); it++)
			if(*it == mCon[i])
				break;
		int dist = distance(dq.begin(), it);
		if(dist <= (N/2)){
			for (int k = 0; k < dist; k++){
				dq.push_back(dq.front());
				dq.pop_front();
				cnt++;
			}
		}else{
			for (int k = 0; k < N - dist; k++){
				dq.push_front(dq.back());
				dq.pop_back();
				cnt++;
			}
		}
		dq.pop_front();
		N--;
	}
	cout << cnt;
	return 0;
}
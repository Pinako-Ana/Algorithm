#include <iostream> 
#include <deque>
using namespace std;
int main(void){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	deque <int> a;
	int N, K; cin >> N >> K;
	for (int i = 1; i <= N; i++)
		a.push_back(i);
	cout << '<';
	int cnt = 0;
	int p = a.size();
	while(p){
		cnt++;
		if(cnt == K){
			if(p != 1) cout << a.front() << ", ";
			else cout << a.front();
			a.pop_front();
			cnt = 0;
			p--;
		}else{
			a.push_back(a.front());
			a.pop_front();
		}
	}
	cout << '>';
	return 0;
}



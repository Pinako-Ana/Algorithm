#include <iostream>
#include <queue>
using namespace std;
int main(void){
	priority_queue<int,vector<int>, greater<int > > pq;
	int x, N; scanf("%d",&N);
	for (int i = 0; i < N; i++){
		scanf("%d",&x);
		if(x > 0) pq.push(x);
		else{
			if(pq.empty()) printf("0\n");
			else {
				printf("%d\n", pq.top());
				pq.pop();
			}
		}
	}
	return 0;

}
#include <iostream>
#include <queue>
using namespace std;
int main(void){
	priority_queue<int> pq;
	int x, N; scanf("%d",&N);
	for (int i = 0; i < N; i++){
		scanf("%d",&x);
		pq.push(x);
		// if(x > 0) pq.push(x);
		// else{
		// 	if(pq.empty()) printf("0\n");
		// 	else {
		// 		printf("%d\n", pq.top());
		// 		pq.pop();
		// 	}
		// }
	}

	for (int i = 0; i < N; i++)
	{
		cout << pq.top() <<'\n';
		pq.pop();
	}
	
	return 0;
}
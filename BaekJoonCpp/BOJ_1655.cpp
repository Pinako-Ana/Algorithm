#include <iostream>
#include <queue>
using namespace std;
priority_queue<int> max_heap;
priority_queue<int ,vector<int> ,greater<int> > min_heap;
int main(void){
	int N,x; scanf("%d", &N);
	for (int i = 0; i < N; i++){
		scanf("%d",&x);
		if(max_heap.size() == min_heap.size()){
			max_heap.push(x);
		}else min_heap.push(x);
		if(!max_heap.empty() && !min_heap.empty() && (max_heap.top() > min_heap.top())){
			int a = max_heap.top();
			int b = min_heap.top();
			max_heap.pop();
			min_heap.pop();
			min_heap.push(a);
			max_heap.push(b);
		}
		printf("%d\n", max_heap.top());
	}
	
	return 0;
}
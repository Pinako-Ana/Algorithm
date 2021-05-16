#include <iostream>
#include <queue>
#include <cmath>
using namespace std;
struct compare{
	bool operator()(int a, int b){
		if(abs(a)== abs(b)) return a > b;
		else return abs(a) > abs(b);
		//priority queue는 힙구조임
		//그니까 위의 조건들이 맞을때 
		//b를 heap의 top에 올려주는거임
	}
};
int main(void){
	priority_queue<int,vector<int>, compare > pq;
	int x, N; scanf("%d",&N);
	for (int i = 0; i < N; i++){
		scanf("%d",&x);
		if(x != 0) pq.push(x);
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
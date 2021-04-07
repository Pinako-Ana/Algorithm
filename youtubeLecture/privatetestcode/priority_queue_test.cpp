#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(void){

    queue<int> q;
    q.push(4);
    q.push(1);
    q.push(30);
    q.push(21);
    q.push(9);

    priority_queue<int> pq;
    pq.push(4);
    pq.push(1);
    pq.push(30);
    pq.push(21);
    pq.push(900);  
    



    printf("%d",pq.top());
}
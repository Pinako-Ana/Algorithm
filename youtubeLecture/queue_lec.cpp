#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int main(void){
    queue<int> q;
    q.push(4);
    q.push(7);
    q.push(1);
    q.pop();
    q.push(2);
    q.pop();
    q.push(3);
    q.push(5);
    q.push(10);
    while (!q.empty()){
        cout << q.front() << ' ';
        q.pop();
    }
    printf("\n");
    cout << q.back() << endl;
}
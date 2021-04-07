#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

void printstack(stack<int> a){
    while (!a.empty()){
        cout << a.top() << ' ';
        a.pop();
    }
    printf("\n");
    
}

int main(void){
    stack<int> s,v;

    s.push(7);
    s.push(4);
    s.push(1);
    s.pop();
    s.push(2);
    s.push(3);
    s.push(9);
    s.pop();
    s.pop();
    // while (!s.empty())
    // {
    //     cout << s.top() << '\n';
    //     s.pop(); 
    // }
    v.push(45);
    v.push(34);
    v.push(156);
   
    printstack(s);
    printstack(v);
    s.swap(v);
    printstack(s);
    printstack(v);

    return 0;
}
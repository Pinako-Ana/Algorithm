#include <iostream>
#include <stack>
#include <cmath>

using namespace std;
stack <int> a,b,c;

void hanoi(int x){
    if(x == 1)
    hanoi(x-1);
    
}

int main(void){
    int n ;
    cin >> n;
    for (int i = n; i > 0; i--){
        a.push(i);
    }
    printf("%d",int(pow(2,n)) - 1);
    hanoi(n);
    return 0;
}
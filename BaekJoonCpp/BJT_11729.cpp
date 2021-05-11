#include <iostream>
using namespace std;
void hanoi(int n, int from, int to){
    int mid = 6 - from - to;
    if(n == 1) cout << from << ' ' << to << '\n';
    else{
        hanoi(n-1, from, mid);
        hanoi(1, from, to);
        hanoi(n-1,mid,to);
    }
}
int main(void){
    int n ;
    cin >> n;
    cout << (1<<n) -1 << '\n';
    hanoi(n,1,3);
    return 0;
}
#include <iostream>

using namespace std;

int main(void){
    int q;
    cin >> q;
    int n = 2;
    if(q == 1) printf("%d", 1);
    else{
        while(1){
            if(q <= 3*n*(n-1)+1){
                printf("%d",n);
                break;
            }
            n++;
        }
    }
    return 0;
}
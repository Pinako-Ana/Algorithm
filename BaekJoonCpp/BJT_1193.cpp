#include <iostream>

using namespace std;

int main(void){
    int x;
    cin >> x;
    int n = 1;
    while (1){
        if(x <= n*(n+1)/2){ break;}
        n++;
    }
    int std = n*(n+1)/2;
    if(n%2 == 1){ printf("%d/%d",1+std-x,n-(std-x));}
    else if(n%2 ==0){printf("%d/%d",n-(std-x),1+std-x);}
    return 0;
}
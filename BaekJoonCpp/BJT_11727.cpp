#include <iostream>

int d[1001];

int dp(int x){
    if(x == 1) return 1;
    if(x == 2) return 3;
    if(d[x] != 0) return d[x];
    return d[x] = dp(x-1) + dp(x-2)*2;
}

int main(void){
    int a;
    while(1){
    scanf("%d", &a);
    printf("%d", dp(a));
    }return 0;
}
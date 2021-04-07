//다이나믹 프로그래밍 타일문제이다
//타일 개수간의 규칙을 파악하고 점화식을 찾아야함

#include <iostream>

int d[1001];
int dp(int x){
    if(x==1) return 1;
    if(x==2) return 2;
    if(d[x] != 0) return d[x];
    return d[x] = (dp(x-1) + dp(x-2)) % 10007;
}


int main(void){
    printf("%d",dp(2000));

}
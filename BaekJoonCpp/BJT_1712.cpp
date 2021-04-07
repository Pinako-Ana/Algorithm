#include <iostream>
int main(void){
    int a,b,c;
    int i = 1;
    scanf("%d %d %d", &a,&b,&c);
    if(b >= c){
        printf("%d",-1);
    }else{
        printf("%d", (a/(c-b))+1);
    }
    return 0;
}// 시간초과라구...???
#include <iostream>
#include <stdio.h>

int main(void){
    int h, m;
    
    while(scanf("%d %d", &h,&m) != EOF){
        printf("%d\n",h+m);
    }
    return 0;   
}
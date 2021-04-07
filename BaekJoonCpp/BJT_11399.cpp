#include <stdio.h>
#include <algorithm>
#define N 10001

int p[N];

int main(void){
    int man, pi;
    int sum = 0;
    int time = 0;
    scanf("%d", &man);
    for (int i = 0; i < man; i++){
        scanf("%d",&pi);
        p[i] = pi;
    }
    std::sort(p,p+man);
    for (int j = 0; j < man; j++){
        time += p[j];
        sum += time;
    }
    printf("%d\n",sum);
}
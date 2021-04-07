#include <stdio.h>
#include <math.h>
int main(void){
    double a, b ,v;
    scanf("%lf %lf %lf", &a,&b,&v);
    printf("%d",(int)(ceil((v-a)/(a-b) + 1)));
    return 0;
}//(((나무높이 - 아침에가는거리) / 실질적으로 가는 거리) + 1) 를 올림 해준다.
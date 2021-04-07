#include <stdio.h>
#include <math.h>


bool isPrimenumber(int x){
    for (int i = 2; i < x; i++){
        if ((x % i) == 0) return false;
    }
    return true;
}

bool isPrimenumber_v2(int x){
    int end = (int)sqrt(x);
    for (int i = 2;i <= end;i++){
        if(x%i == 0) return false;
    }
    return true;
}


int main(void){
    while(1){
        int num;
        scanf("%d", &num);
        printf("is %d a prime number? = %d\n",num,isPrimenumber_v2(num));
    }
    return 0;
}
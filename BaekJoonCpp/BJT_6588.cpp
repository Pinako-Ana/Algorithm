#include <iostream>
#include <math.h>
#define max 1000001

int a[max];
int b[max];

bool isPrimenumber_v2(int x){
    int end = (int)sqrt(x);
    for (int i = 2;i <= end;i++) if(x%i == 0) return false;
    return true;
}

int main(void){
    int i = 0, cnt = 0, testcase =1;
    while(testcase > 0){
        scanf("%d", &testcase);
        a[i] = testcase;
        i++; cnt++;
    }
    for (int j = 2; j < max; j++){
        if(b[j] != 0) continue;
            for (int k = 2*j; k < max; k += j){
                b[k] = k;
        }
    }
    int n = 3,m = 0;

    while(a[m] != 0){
        if(b[n] == 0 && isPrimenumber_v2(a[m]-n)){
            printf("%d = %d + %d\n", a[m],n,a[m]-n);
            m++;
            n =2;
        }
        n++;
        if(n == a[m]){
            printf("Goldbach's conjecture is wrong.");
            break;
        }
    }
    return 0;
}
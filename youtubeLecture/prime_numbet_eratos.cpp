#include<stdio.h>
#include<math.h>

int num = 100000;
int a[100001];

void prime_number_sieve(int x){
    for (int i = 2; i <= x; i++){
        a[i] = i;
    }
    for (int i = 2; i <= x; i++){
        if(a[i] == 0) continue;
        for (int j = 2*i; j <= x; j += i){
            a[j] = 0;
        }
    }
    int count = 0;
    for (int i = 0; i < x; i++){
        if(a[i] != 0) {
            printf("%5d ", a[i]);
            count++;
            if(count % 10 == 0) printf("\n");
        }
    }
}
int main(void){
    // while(1){
        prime_number_sieve(100000);
    // }
}
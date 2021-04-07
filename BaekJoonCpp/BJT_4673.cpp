#include <iostream>
#define max 10001

int a[max];

int nextnumber(int x){
    int sum = 0;
    int y = x;
    while(y != 0){
        sum += (y%10);
        y /= 10;
    }
    return sum + x;
}
int main(void){
    for (int i = 1; i < max; i++){
        if(a[i] == 1 ) continue;
        for (int j = nextnumber(i); j < max; j = nextnumber(j))a[j] = 1;
    }
    for (int k = 1; k < max; k++) if(a[k] == 0) printf("%d\n", k);
    return 0;
}
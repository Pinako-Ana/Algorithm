#include <iostream>
#define max 1000001
int a[max];
//cin cout 써서 했었는데 느려서 시간초과 떴었다 
int main(void){
    a[1] = 1;
    for (int j = 1; j < max; j++){
        if(a[j] == 1) continue;
            for (int k = 2*j; k < max; k += j){
                a[k] = 1;
        }
    }
    int x, y;
    scanf("%d %d", &x, &y);
    for (int l = x; l <= y; l++) if(a[l] == 0) printf("%d\n", l);

    return 0;
}
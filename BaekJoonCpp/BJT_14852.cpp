#include <stdio.h>

long long int data[1000001][2];
long long int fill(int x){
    data[0][0] = 0;
    data[1][0] = 2;
    data[2][0] = 7;
    data[2][1] = 1;
    for (int i = 3; i <= x; i++){
        data[i][1] = data[i-3][0] + data[i-1][1]% 1000000007;
        data[i][0] = (2*data[i-1][0] + 3*data[i-2][0] + 2*data[i][1])%1000000007;
    }
    return data[x][0];
}
int main(void){
    int x;
    scanf("%d", &x);
    printf ("%lld\n", fill(x));
    return 0;
    
}
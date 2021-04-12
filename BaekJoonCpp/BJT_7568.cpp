#include <iostream>
using namespace std;
int rk[50],a[50],b[50];
int main(void){
    int n, w,h;
    scanf("%d", &n);
    for (int  i = 0; i < n; i++){
        scanf("%d %d", &w, &h);
        a[i] = w;
        b[i] = h;
    }
    int count = 1, max ,pos;
    for(int l = 0; l< n; l++){
        for(int j = 0; j < n; j++){
            if(a[l] > a[j] && b[l] > b[j]){
                rk[j]++;
            }
        }
    }
    for (int p = 0; p < n; p++){
        printf("%d ", rk[p]+1);
    }
    return 0;
}
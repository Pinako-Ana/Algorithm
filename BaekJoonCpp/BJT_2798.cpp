#include <iostream>
int a[101];
int main(void){
    int n, m, max = 0;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++){scanf("%d", &a[i]);}
    for (int j = 0; j < n; j++){
        for (int k = j+1; k < n; k++){
            for (int l = k+1; l < n; l++){
                if(max<(a[j]+a[k]+a[l]) && (a[j]+a[k]+a[l]) <= m)
                    max = a[j]+a[k]+a[l];
            }
        }
    }
    printf("%d", max);
    return 0;
}
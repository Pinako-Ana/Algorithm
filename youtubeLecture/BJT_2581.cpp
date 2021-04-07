#include <iostream>

int a[10001];
int main(void){
    int m,n;
    int sum = 0, min;
    bool mintog = true;
    std::cin >> m;
    std::cin >> n;
    a[1]=1;
    a[2]=0;
    for (int i = 2; i <= n; i++){
        if(a[i] == 1) continue;
        for (int k = 2 * i; k <= n; k += i){
            a[k] = 1;
        }
    }
    for (int l = m; l <= n; l++){
        if(a[l]== 0 && mintog){
            min = l;
            mintog = false;
        }
        if(a[l] == 0){sum += l;}
    }
    if(sum == 0) printf("%d",-1);
    else{
        printf("%d\n",sum);
        printf("%d\n",min);
    }
    return 0;
}
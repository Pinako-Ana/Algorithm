#include <iostream>

int main(void){
    int a[1001], b[1001];
    int N,cnt = 0;
    for (int k = 0; k < 1001; k++) a[k] = 0;
    a[1] = 1;
    for (int i = 2; i <= 1000; i++){
        if(a[i] == 1) continue;
        for (int j = 2*i; j <= 1000; j += i){
            a[j] = 1;
        }
    }
    std::cin >> N;
    for (int i = 1; i <= N; i++){
        std::cin >> b[i];
    }
    for (int i = 1; i <= N; i++){
        if(a[b[i]] == 0) cnt++;
    }
    std::cout << cnt <<std::endl;
    return 0;
}
#include <iostream>
#include <algorithm>
#define N 1001
int w[N];
int main(void){
    int n,h,j=0,total = 1;
    std::cin >> n;
    for (int i = 0; i < n; i++){
        std::cin >> h;
        w[i] = h;
    }
    std::sort(w,w+n);
    while(total >= w[j]){
        total += w[j];
        j++;
    }
    std::cout << total;
    return 0;
}
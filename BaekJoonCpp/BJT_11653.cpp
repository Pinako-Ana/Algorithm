#include <iostream>

int main(void){
    int n,i=2;
    std::cin >> n;
    while(1){
        if(n == 1) break;
        else if(n % i == 0){
            n /= i;
            printf("%d\n",i);
            i = 2;
            continue;
        }
        i++;
    }
    return 0;
}
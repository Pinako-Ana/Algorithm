#include <iostream>

int main(void){
    int n,sum=0;
    char d[100];
    std::cin >> n;
    std::cin >> d;

    for (int i = 0; i < n; i++){sum += (d[i] - '0');}
    
    printf("%d", sum);
    return 0;
}
#include <iostream>

int main(void){
    int h, m;
    std::cin >> h >> m;
    if(m >= 45) printf("%d %d\n", h, m-45);
    else{
        if(h == 0) printf("%d %d\n", 23, m+15);
        else printf("%d %d\n", h - 1, m+15);
    }
    return 0;
}
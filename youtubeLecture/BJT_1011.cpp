#include <iostream>


void centauri(long long int a, long long int b){
    long long int d = b -a;
    long long int i = 1;
    while(i*i <= d) i++;
    i--;
    if(i*i == d) printf("%lld\n", 2*i -1);
    else if(d - i*i <= i) printf("%lld\n", 2*i);
    else printf("%lld\n",2*i +1);
}

int main(void){
    int test;
    std::cin >> test;
    long long int x, y;
    for (int i = 0; i < test; i++){
        std:: cin >> x >> y;
        centauri(x,y);
    }
    return 0;
}
#include <iostream>

int main(void){

    int a, b;
    std::cin >> a >>b;

    int newa = a/100 + a/10%10*10 + a%10*100;
    int newb = b/100 + b/10%10*10 + b%10*100;
    
    if(newa > newb) printf("%d",newa);
    else printf("%d",newb);

    return 0;
}
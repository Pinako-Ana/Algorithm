#include <iostream>


void show(int *a){

    for (int i = 32; i > 0; i--){
        std::cout << ((*a & (1 << (i - 1))) ? 1 : 0);
    }
    std::cout<< std::endl;
}
void init(int *a){
    *a = 0;
}

void full(int *a){
    *a = -1;
}

void drop(int *a, int i){
    *a &= -(1 << i);
}

void set(int *a, int i){
    *a |= (1 << i);
}
bool isset(int *a, int i){
    return *a & (1 << i);
}

void toggle(int *a, int i){
    *a ^= (1 << i);
}

void droplast(int *a){
    *a &= (*a - 1);
}

int main(void){

    int k;
    std::cin >> k;
    // std::cout << (1 << 10);
    show(&k);
    init(&k);
    show(&k);
    full(&k);
    show(&k);
    
    k = 302983;
    printf("\n");
    show(&k);
    
    drop(&k, 4);
    show(&k);
    set(&k, 4);
    show(&k);
    std::cout << isset(&k, 10) << std::endl;
    show(&k);
    toggle(&k,10);
    show(&k);

    droplast(&k);
    show(&k);
    
    return 0;
}
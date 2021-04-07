#include <iostream>
#include <algorithm>

int rope[100001];

int main(void){
    int num, max_w = 0;
    std::cin >> num;
    for (int i = 0; i < num; i++) std::cin >> rope[i];
    std::sort(rope,rope+num);
    for (int j = 0; j < num; j++){
        max_w = std::max(max_w,rope[j]*(num-j));
    }
    std::cout << max_w << std::endl;
}
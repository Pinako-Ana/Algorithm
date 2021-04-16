#include <iostream>

#define N 11
int higher[N];
int order[N];
int main(void){
    int num, count;
    std::cin >> num;
    
    for (int i = 0; i < num; i++){
        std::cin >> higher[i];
    }
    for (int i = 0; i < num; i++){
        count = 0;
        for (int j = 0; j < num; j++){
            if(order[j] == 0){
                if(count == higher[i]) order[j] = i+1;
            count++;
            }
        }
    }
    for (int i = 0; i < num; i++){
        std::cout << order[i] << ' ';
    }
    return 0;
}

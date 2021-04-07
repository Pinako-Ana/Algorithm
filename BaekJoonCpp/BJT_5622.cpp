#include <iostream>

int main(void){
    std::string dial;
    int time = 0;
    std::cin >> dial;
    int a[26] = {3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10};
    for (int i = 0; i < dial.length(); i++){
        time += a[dial[i] - 'A'];
    }
    printf("%d", time);
    return 0;
}
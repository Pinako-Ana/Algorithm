#include <iostream>
#include <algorithm>
#include <vector>

std::vector <int> number;

int main(void){
    int time,num;
    std::cin >> time;
    
    for (int i = 0; i < time; i++){
        std:: cin >> num;
        number.push_back(num);
    }
    std:sort(number.begin(),number.end());

    std::cout <<number.front()<<" "<<number.back()<<std::endl;

    return 0;
}

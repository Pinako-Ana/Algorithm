#include <iostream>

int a[10];

int main(void){
    std::string num;
    std::cin >> num;
    int sum = 0;
    for (int i = 0; i < num.size(); i++){
        a[num[i] - '0']++;
        sum += num[i] - '0';
    }
    if(sum % 3 == 0 && a[0] != 0){
        for (int i = 9; i >=0 ; i--){
            for (int j = 0; j < a[i]; j++){
                 std::cout <<i;
            }
        }
    }else{std::cout << -1 << std::endl;}
    return 0;
}
#include <iostream>
#include <algorithm>
#include <vector>

bool compare(int i, int k) {return k<i;}

void mirco(int a){
    std::vector<int> result;
    int j=0, num=0, sum=0, count=0;
    num = a;
    while(num != 0){
        j = num % 10;
        result.push_back(j);
        if(j == 0) {count++;}
        sum += j;
        num /= 10;
    }
    if(count != 0 && sum % 3 == 0){
        sort(result.begin(),result.end(),compare);
        for (int i = 0; i < result.size(); i++){
            std::cout<<result[i];} 
    }
    else{printf("%d\n", -1);}
};
int main(void){
    int number;
    std::cin >> number;
    mirco(number);
    return 0;
}
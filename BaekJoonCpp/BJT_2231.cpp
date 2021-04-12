#include <iostream>

int jarisu(int x){
    int sum = 0;
    int n = x;
    while(n != 0){
        sum += n%10;
        n = n/10;
    }
    return sum;
}//10가지고 자리수의 합을 구한다

int main(void){
    int i=1,n;
    std::cin >> n;
    int generator;
    while (1){
        if(n == i + jarisu(i)) break;
        else if(i > n) { 
            i = 0;
            break;
        }
        i++;
    }//1부터 시작해서 주욱 찾아가는거지
    std::cout << i;
    return 0;
}
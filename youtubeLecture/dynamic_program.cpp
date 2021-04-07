//다이나믹 프로그래밍이란 하나의 문제를 단 한 번만 풀도록 하는 알고리즘
//큰 문제를 작은문제로 나눌 수 있을때
//작은 문제에서 구한 정답은 그것을 포함하는 큰 문제에서도 동일할때

#include <stdio.h>
#include <iostream>


int fibonacci(int x){
    if(x==1) return 1;
    if(x==2) return 1;
    return fibonacci(x-1) + fibonacci(x-2);
}
//이거는 O(2^n) 만큼의 시간이 걸린다 개선을 해야한다!!

int data[100];
int fibonacci_v2(int x){
    if(x==1) return 1;
    if(x==2) return 1;
    if(data[x] != 0) return data[x];
    return data[x] = fibonacci_v2(x-1) + fibonacci_v2(x-2);
}// 이렇게 해주면 배열에 저장된 값을 불러오기만 하면 되니까 시간 복잡도가 O(N)이 된다!!



int number;
int main(void){
    while (1){
        printf("몇번째 수를 원하는가?");
        std::cin >> number;
        std::cout <<"피보나치 수열의 "<<number<<"번째 수는 "<<fibonacci_v2(number)<<std::endl;
    }
    
}
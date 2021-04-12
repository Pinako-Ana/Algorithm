#include <iostream>
int dp[21];
long long int fibonacci(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    if(n == 2) return 1;
    if(dp[n] != 0) return dp[n];
    return dp[n] = fibonacci(n-1) + fibonacci(n-2);
}
int main(void){
    int n;
    std::cin >> n;
    std::cout << fibonacci(n);
    return 0;
}
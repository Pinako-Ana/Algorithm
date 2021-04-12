#include <iostream>

int check(int *arr){
    if(arr[0] == arr[1]) return arr[2];
    else if(arr[1] == arr[2]) return arr[0];
    else return arr[1];
}   
int main(void){
    int x[3];
    int y[3];
    int a,b;
    for (int i = 0; i < 3; i++){
        std::cin >> a >> b;
        x[i] = a;
        y[i] = b;
    }
    printf("%d %d", check(x),check(y));
    return 0;
}
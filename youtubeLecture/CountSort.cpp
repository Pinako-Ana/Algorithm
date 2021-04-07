#include <iostream>
#include <algorithm>
int main(void){
    int temp;
    int count[5];
    int arr[30] = {4,5,1,3,2,
                   5,4,2,3,4,
                   1,1,5,1,2,
                   5,3,4,5,1,
                   4,3,5,4,3,
                   3,4,5,2,2};
    for (int i = 0; i < 5; i++){
        count[i] = 0;
    }
    for (int i = 0; i < 30; i++){
        count[arr[i] -1]++;
    }
    for (int i = 0; i < 5; i++){
        if (count[i] != 0){
            for (int j = 0; j < count[i]; j++){
                printf("%d", i+1);
            } 
        }
    }
    return 0;
}
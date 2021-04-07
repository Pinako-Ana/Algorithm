//
//  BTJ_2752.cpp
//  test
//
//  Created by PINAKO on 2021/03/16.
//

#include <iostream>

int main(void){
    int arr[3];
    int i,j,min,index = 0,temp;
    for (i =0; i<3; i++) {
        scanf("%d", &arr[i]);
    }
    for (i =0; i<3; i++) {
        min = 1000001;
        for (j =i; j<3; j++) {
            if(min > arr[j]){
                min = arr[j];
                index = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[index];
        arr[index] = temp;
    }
    for (i = 0; i<3; i++) {
        printf("%d ",arr[i]);
    }
}


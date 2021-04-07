#include <iostream>

int main(void){
    int i, j, temp;
    int arr[10] = {4,6,1,5,3,7,2,10,8,9};
    for(i = 0 ; i<10; i++){
        for(j=0; j<9 - i ; j++){
            if(arr[j+1] < arr[j]){
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
            for ( int l = 0; l < 10; l++){
                printf("%d", arr[l]);
            }
            printf("\n");    
        }

    }

    

    return 0;    

}
#include <stdio.h>
 
int main(void){
    int i, j, temp;
    int arr[10] = {4,6,1,5,3,7,2,10,8,9};
    for (i = 0; i < 9; i++){
        j = i;
        while (arr[j]> arr[j+1]){
            for (int l = 0; l < 10; l++){
            printf("%d", arr[l]);
            }
            printf("\n");
            
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
            j--;
            
        }
        printf("\n%d times\n",i);
    }
    for (int l = 0; l < 10; l++){
        printf("%d", arr[l]);
        }
        printf("\n");

    return 0;
}
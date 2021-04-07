#include <stdio.h>
int number = 10;
int data[10] = {3,5,2,9,6,10,1,4,7,8};
void quickSort(int *data, int start, int end){
    if(start >= end){
        return;
    }
    int key = start;
    int i  = start + 1;
    int j = end;
    int temp;

    while (i<=j){
        while(data[i] >= data[key]){
            i++;
        }
        printf("Current I posi %d\n",i);
        while(data[j] <= data[key] && j > start){
            j--;
        }
        printf("Current J posi %d\n",j);
        if (i > j){
            temp = data[j];
            data[j] = data[key];
            data[key] = temp;
        }else{
            temp = data[j];
            data[j] = data[i];
            data[i] = temp;                
        }
    }
    for (int k = 0; k < number; k++){
        printf("%d", data[k]);  
    }
    printf("--pivot is %d\n",data[j]);
    quickSort(data,start,j-1);
    quickSort(data ,j +1, end);
}  
int main(void){
    quickSort(data,0,number -1);
    for (int i = 0; i < number; i++){
        printf("%d", data[i]);  
    }
    
}
#include <stdio.h>


void swap(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int number = 9;
int heap[9] = {5,8,9,2,7,6,8,1,4};



int main(void){
    //최대 힙을 만들어줌
    for (int i = 1; i < number; i++){
        int c = i;
        do{
            int root = (c-1)/2;
            if(heap[root] < heap[c]){
                swap(heap[root], heap[c]);
            }
            c = root;
        }while(c != 0);
    }
    //크기를 줄여가며 반복적으로 힙을 구성
    for (int i = number -1; i >= 0 ; i--){
        swap(heap[0], heap[i]);
        int root = 0;
        int c;
        do{
            c = 2 * root + 1;
            //자식중에 더 큰 값 찾기
            if (heap[c] < heap[c + 1] && c < i -1){
                c++;
            }
            //루트보다 자식이 더 크다면 교환
            if (heap[root] < heap[c] && c < i){
                swap(heap[root], heap[c]);
            }
            root = c;
        }while(c < i);
    }
    for (int i = 0; i < number; i++)
    {
        printf("%d ", heap[i]);
    }
    
    
}
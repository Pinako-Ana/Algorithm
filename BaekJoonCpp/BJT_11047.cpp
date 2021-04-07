#include <stdio.h>
#define N 11

int m_list[N];
int main(void){
    int n, price;
    int count= 0;

    scanf("%d %d" ,&n, &price);
    for (int i = 0; i < n; i++){
        scanf("%d", &m_list[i]);
    }

    for (int j = n-1; j >= 0; j--){
        count += price/m_list[j];
        price %= m_list[j];
    }
    printf("%d\n",count);
    
    
}
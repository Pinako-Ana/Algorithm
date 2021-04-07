#include <stdio.h>

int num = 4;
int INF = 100000;
int a[4][4] = {
    {0,5,INF,8},
    {7,0,9,INF},
    {2,INF,0,4},
    {INF,INF,3,0}
};


void floydwashall(){
    int d[num][num];

    for (int i = 0; i < num; i++){
        for (int j = 0; j < num; j++){
            d[i][j] = a[i][j];
        }
    }
    for (int i = 0; i < num; i++){
        for (int j = 0; j < num; j++){
            for (int k = 0; k < num; k++){
                if((d[j][i] + d[i][k]) < d[j][k]){
                    d[j][k] = (d[j][i] + d[i][k]);
                }
            }   
        }
    }
    for (int i = 0; i < num; i++){
        for (int j = 0; j < num; j++){
            printf("%d ", d[i][j]);
        }
        printf("\n");
    }
}

int main(void){
    floydwashall();
    return 0;
}
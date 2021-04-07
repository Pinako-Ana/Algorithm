#include <iostream>

int a[10001];//소수 미리 판별

int main(void){
    int time;
    a[1] = 1;
    for (int i = 2; i < 10001; i++){
        if(a[i] == 1) continue;
        for (int j = 2*i ; j < 10001; j += i){a[j] = 1;}
    }//소수 미리 걸러놔

    std::cin >> time;
    int c[time];
    for (int i = 0; i < time; i++){std::cin >> c[i];}

    for (int k = 0; k < time; k++){
        for (int j = 2; j <= c[k]; j++){//2부터 입력된 수까지 포함해서 반복
            if(a[j] == 0 && a[c[k]-j] == 0 && (j>= c[k]-j)){
                printf("%d %d\n", c[k] - j,j);
                break;
            //둘다 소수이면서 j가 앞지르는 순간이 온다 그때가 
            //제일 두 수 가 차이가 적을때임 그래서 마지막에는
            //반대로 출력
            }
        }
    }
    
    
    



    return 0;
}
#include <iostream>
#include <algorithm>

using namespace std;
int cont[10001];

int main(void){
    int num;
    scanf("%d",&num);
    for (int i = 0; i < num; i++){//입력받으면서 컨테이너에 바로 저장
        int inpnum;
        scanf("%d",&inpnum);
        cont[inpnum]++;
    }
    for (int i = 0; i < 10001; i++){
            while (cont[i] != 0){
                printf("%d\n", i);
                cont[i]--;
            }         
    }
}
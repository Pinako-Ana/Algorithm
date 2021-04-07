#include <iostream>
#include <cstring>


int main(void){
    int test, r;
    char s[20];
    scanf("%d", &test);

    for (int i = 0; i < test; i++){
        scanf("%d %s", &r, s);
        for (int  j = 0; j < strlen(s); j++){
            for (int k = 0; k < r; k++){
                printf("%c",s[j]);
            }
        }
        printf("\n");
    }
    return 0;
}
//좀 애매하다 내가 원하는 그런 답의 모양이 아님...
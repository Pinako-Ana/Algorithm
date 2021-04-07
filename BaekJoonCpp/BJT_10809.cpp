#include <iostream>
#include <cstring>

int main(void){
    char s[100];
    //97 ~ 122 = 'a' ~ 'z'
    std::cin >> s;
    int size = strlen(s);
    for (int i = 97; i < 123; i++){
        for (int j = 0; j < size; j++){
            if(s[j] - i == 0){
                printf("%d ",j);
                break;
            }else if(j == (size -1)) {printf("%d ", -1);} 
        }
    }
    return 0;
}
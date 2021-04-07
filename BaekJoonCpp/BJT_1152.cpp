#include <iostream>
#include <string>
#include <cstring>
int main(void){
    char sen[1000001];
    int w_count=0;
    std::cin.getline(sen,1000001);
    for (int i = 0; i < strlen(sen); i++){
        if(i==0 && sen[i] == ' ') continue;
        if(sen[i] == ' '){ w_count++; }
        else if(sen[i+1] == '\0') {w_count++; continue;}
    }
    printf("%d",w_count);
    return 0;
}
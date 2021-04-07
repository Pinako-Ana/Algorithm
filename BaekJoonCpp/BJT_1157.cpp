#include <iostream>
#include <cstring>

int main(void){
    char word[1000001];
    int alphabet[26];
    int pos,k,count = 0, max = -1;
    std::cin >> word;
    for (int i = 65; i < 91; i++){
        for (int j = 0; j < strlen(word); j++){
            if(word[j] == i || word[j] == i + 32){
                alphabet[i-65]++;
            }
        }
    }
    for (k = 0; k < 26; k++){
        if (max < alphabet[k]){
            max = alphabet[k];
            pos = k;
            count = 1;
        }
        else if(max == alphabet[k]) {count++;}
    }
    if (count == 1) {printf("%c", pos + 65);}
    else {printf("?");}

    return 0;
}
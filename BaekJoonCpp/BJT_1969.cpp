#include <iostream>
#include <string>
std::string storage[1001];
char result[51];
char telomere[4] = {'A','C','G','T'};
int main(void){
    int n, m ,hd = 0, pos=0, max = 0;
    std::cin >> n >> m;
    for (int i = 0; i < n; i++){
        std::cin >> storage[i];
    }
    for (int j = 0; j < m; j++){
        int number[4] = {0,0,0,0};
        for (int k = 0; k < n; k++){
            switch (storage[k][j]){
            case 'A':
                number[0]++;
                break;
            case 'C':
                number[1]++;
                break;
            case 'G':
                number[2]++;
                break;
            case 'T':
                number[3]++;
                break;
            }
        }
        for (int l = 0; l < 4; l++){
            if (max < number[l]){
                max = number[l];
                pos = l;}
        }
        result[j] = telomere[pos];
        hd += (n-number[pos]);
        max = 0;
    }
    std::cout << result << '\n' << hd << '\n';
    return 0;
}
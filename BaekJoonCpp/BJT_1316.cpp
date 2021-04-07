#include <iostream>

using namespace std;
int cnt = 0;
void groupword(string a){
    int alpha[26];
    for (int k = 0; k < 26; k++){alpha[k] = 0;}
    int size = a.length();
    for (int k = 0; k < size; k++){
        if(k != size-1 && a[k] == a[k+1]){ continue;}
        else if(alpha[a[k] - 'a'] != 1){alpha[a[k] - 'a'] = 1;}
        else if(alpha[a[k] - 'a'] == 1){break;}
        if(k == size -1){cnt++;}      
    }
}
int main(void){
    int n;
    cin >> n;
    string word;
    for (int i = 0; i < n; i++){
        cin >> word;
        groupword(word);
    }
    printf("%d", cnt);
    return 0;
}
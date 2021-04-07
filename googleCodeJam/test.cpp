#include <iostream>
#include <vector>
#include <string>

using namespace std;

char temp
void swapping(char *a, char *b){
    *temp = *a;
    *a = *b;
    *b= *temp;
}

int main(void){
    
    vector< pair<int,string > > test;
    test.push_back({1,"hello"});
    cout << test[0].second << endl;
    swapping(test[0].second[0],test[0].second[1]);
    cout << test[0].second << endl;
    return 0;
}
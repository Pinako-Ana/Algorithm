#include <iostream>
#include <string>

using namespace std;

int main(void){
    string A, B;
    cin >> A >> B; 
    // cout << (A.back()-'0') + (B.back()-'0');
    A.pop_back();
    cout << A;

    

    return 0;
}
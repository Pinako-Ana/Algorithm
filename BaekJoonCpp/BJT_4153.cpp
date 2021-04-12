#include <iostream>

using namespace std;

int main(void){
    int a,b,c;
    int a1,b1,c1;
    while(1){
        cin >> a >> b >> c;
        if(a == 0 && b == 0 && c == 0) break;
        else{
            a1 = a*a;
            b1 = b*b;
            c1 = c*c;
            if(a1 + b1 == c1 || a1 + c1 == b1 || b1 + c1 == a1) cout << "right" << endl;
            else cout << "wrong" << endl;
        }
    }
    return 0;
}//right 를 rignt라고 써놨어서 몇번을 틀렸던건지....
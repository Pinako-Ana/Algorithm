#include <iostream>
#include <algorithm>

using namespace std;

bool compare(int a, int b){
    return a > b;
}
int main(void){
    int a [10] = {5,6,1,8,2,9,4,3,7,10};
    sort(a,a+10,compare);
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << ' ' ;
    }
    
}

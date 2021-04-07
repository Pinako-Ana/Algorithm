#include <iostream>

using namespace std;
int main(void){
    int test;
    int h ,w, n;
    cin >> test;
    for (int k = 0; k < test; k++){
        cin >> h >> w >> n;
        int i = n / h;
        int j = n % h;
        if (j != 0){
            printf("%d\n", j*100 + i + 1);
        }else{
            printf("%d\n", h*100 + i);
        }
    }
    return 0;
}
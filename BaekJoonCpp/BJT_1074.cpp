#include <iostream>

using namespace std;
int order = 0;
int N,R,C;
void zsearch(int x, int y, int n){
    if(n == 2){
        if(x == R && y == C){
            cout << order;
            return;
        }order++;
        if(x == R && y+1 == C){
            cout << order;
            return;
        }order++;
        if(x+1 == R && y == C){
            cout << order;
            return;
        }order++;
        if(x+1 == R && y+1 == C){
            cout << order;
            return;
        }order++;
        return;
    }
    zsearch(x,y,n/2);
    zsearch(x,y + n/2,n/2);
    zsearch(x + n/2,y,n/2);
    zsearch(x + n/2, y + n/2,n/2);
}
int main(void){
     //N x Ns 배열, Row, Column
    cin >> N >> R >> C;
    zsearch(0,0,1<<N);
    return 0;
}


//    for (int i = x; i < x+n; i++){
//             for (int j = y; j < y+n; j++){
//                 if(i == k && j ==l ){
//                     printf("%d\n",order);
//                     return;                
//                 }
//                 order++;
//             }
//         }
#include <iostream>
using namespace std;
char a[64][64];
void quadtree(int x, int y, int n){
    char elmt = a[x][y];
    int cnt = 0;
    bool check = true;
    for (int i = x; i < x+n; i++){
        for (int j = y; j < y+n; j++){
            if(elmt == a[i][j]) cnt++;
            else check = false;
        }if(check == false) break;
    }
    if(check == true) cout << elmt;
    else{
        cout << '(';
        quadtree(x,y,n/2);
        quadtree(x,y+n/2,n/2);
        quadtree(x+n/2,y,n/2);
        quadtree(x+n/2,y+n/2,n/2);
        cout << ')';
    }
}
int main(void){
    int n; cin >> n;
    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) cin >> a[i][j];
    quadtree(0,0,n);
    return 0;
}
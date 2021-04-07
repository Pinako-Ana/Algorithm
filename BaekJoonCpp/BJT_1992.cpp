#include <iostream>
#define N 64

using namespace std;
char a[N][N];


void quadtree(int x, int y, int n){
    if(N == 1){
        cout << a[x][y];
        return ;
    }
    string i = quadtree(x,y,n/2);
    string j = quadtree(x,y+n/2, n/2);
    string k = quadtree(x+n/2,y,n/2);
    string l = quadtree(x+n/2,y+n/2,n/2);

    if(i == j && j == k && k == l){
        return i;
    }else{
        return "("+ i + j + k + l + ")";
    }
}



int main(void){
    int n;

    cin >> n;
    for (int i = 0; i < n; i++){
        scanf("%s", &a[i]);
    }
    cout << quadtree(0,0,n);
    return 0;
}
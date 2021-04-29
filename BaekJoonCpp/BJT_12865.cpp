#include <iostream>
#include <algorithm>

using namespace std;
int n,k;
int W[100];
int V[100];
int hdp[101][100001];

int dp(int i, int w){
    if(hdp[i][w] > 0) return hdp[i][w];
    if(i == n) return 0;
    int n1=0,n2;
    if(w + W[i] <= k) 
        n1 = V[i] + dp(i+1, w + W[i]);
    n2 = dp(i+1,w);
    return hdp[i][w] = max(n1,n2);
}
int main(void){
    cin >> n >> k;
    for (int i = 0; i < n; i++){ cin >> W[i] >> V[i]; }
    cout << dp(0,0);
    return 0;
}
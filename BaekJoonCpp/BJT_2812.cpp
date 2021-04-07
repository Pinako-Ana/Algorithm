#include <iostream>
#include <stack>
using namespace std;

char result[500001];
stack <char> bignum;
string a;

int main(void){
    int n, k, cnt; //다 사용했음
    cin >> n >> k;
    cin >> a;
    cnt = k;
    for (int i = 0; i < n; i++){
        while(cnt != 0 && !bignum.empty() && bignum.top() < a[i] ){
            bignum.pop();
            cnt--;
        }
        bignum.push(a[i]);
    }
    while(cnt) {
        bignum.pop();
        cnt--;
    }
    int size = bignum.size();
    for (int l = size-1; l >= 0; l--){
        result[l] = bignum.top();
        bignum.pop();
    }
    cout << result;
    return 0;
}
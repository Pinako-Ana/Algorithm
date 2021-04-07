#include <iostream>
#include <algorithm>

using namespace std;
string a[1000];
int getSum(string str){
    int length = str.length(), sum = 0;
    for (int i = 0; i < length; i++){
        if (0<= (str[i] - '0') && (str[i] - '0') <= 9){
            sum += str[i] - '0';
        }
    }
    return sum;
}
bool compare(string a, string b){
    if (a.length() < b.length()){
        return 1;
    }else if (a.length()>b.length()){
        return 0;
    }else{
        int aSum = getSum(a);
        int bSum = getSum(b);
        if(aSum != bSum){
            return aSum < bSum;
        }else{
            return a < b;
        }
    }
}


int main(void){
    int num;
    cin >> num;
    for (int i = 0; i < num; i++){
        cin >> a[i];
    }
    sort(a, a+num, compare);
    for (int i = 0; i < num; i++){
        cout << a[i] << '\n';
    }
    return 0;
}
#include <iostream>
#include <vector>

long long sum(std::vector<int> &a){
    long long ans;
    int i = 0;
    int l = a.size();
    while (i < l) {
        ans += a[i];
        i++;
    }
    return ans;
}


int main(void){

    return 0;
}
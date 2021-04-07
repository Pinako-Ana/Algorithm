#include <iostream> 
#include <vector>

using namespace std;;

int a[246913];
int main(void){
    int n, count = 0;
    vector<int> arr;
    while(1){
        std::cin >> n;
        if (n == 0) break;
        arr.push_back(n);
    }
    a[1] = 1;
    for(int k = 2; k <=246912; k++){
        if(a[k] == 1) continue;
        for (int i = 2*k; i <= 246912; i += k){
            a[i] = 1;
        }
    }
    for (int i = 0; i < arr.size(); i++){
        for (int l = arr[i]+1; l <= 2*arr[i]; l++){
            if(a[l] == 0) count++;
        }
        printf("%d\n", count);
        count= 0;
    }
    return 0;
}
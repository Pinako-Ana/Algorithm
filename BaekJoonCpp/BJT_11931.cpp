#include <stdio.h>
#include <algorithm>
#include <vector>

int main(void){
    std::vector<int> a;s
    int number, n;
    scanf("%d", &number);
    for (int i = 0; i < number; i++){
        scanf("%d", &n);
        a.push_back(n);
    }
    std::sort(a.begin(),a.end());
    for (int j = 0; j < number; j++){
        printf("%d\n", a[j]);
    }
    return 0;
}
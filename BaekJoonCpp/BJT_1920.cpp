#include <iostream>
#include <algorithm>
#include <vector>
//이진탐색으로 했는데 왜 시간초과가 뜨는거지?? 아 도저히 모르겠네~~
using namespace std;
vector<int> narry;
void isinfunc(int start,int end, int key){
    int middle = (start + end)/2;
    if (narry[middle] == start) printf("0\n");
    else if(narry[middle] == key) printf("1\n");
    else if(key < narry[middle]) isinfunc(start, middle-1,key);
    else if(key > narry[middle]) isinfunc(middle+1,end,key);
}
int main(void){
    int n, m,k,l;
    scanf("%d",&n);
    for (int i = 0; i < n; i++){
        scanf("%d",&l);
        narry.push_back(l);
    }
    sort(narry.begin(),narry.end());
    scanf("%d",&m);
    for (int i = 0; i < m; i++) {
        scanf("%d",&k);
        isinfunc(0,n-1,k);
    }
    return 0;
    }
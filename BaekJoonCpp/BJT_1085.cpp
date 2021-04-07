#include <iostream>
#include <algorithm>
int main(void){
    int x,y,w,h;
    scanf("%d %d %d %d", &x,&y,&w,&h);
    int a[4] = {x,y,w-x,h-y};//어차피 4개니까 넣어주고
    std::sort(a,a+4);//sort함수 돌려버리기~
    std::cout << a[0];
    return 0;
}
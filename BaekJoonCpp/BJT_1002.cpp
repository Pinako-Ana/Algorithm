#include <iostream>
#include <vector>
#include <cmath>

std::vector<int> a;//값 깨끗하게 나오고 싶어..

//(두 반지름 더한 거리 - 원점 간 거리) 를 m이라 두고 m의 범위에 따라 
//교점의 개수가 달라짐
void intersect(int a1,int b1,int c1,int a2,int b2,int c2){
    double d = std::sqrt(std::pow(a2-a1,2) + std::pow(b2-b1,2));
    double m = c1 + c2 - d;
    if(m < 0 || 2*c1 < m) {a.push_back(0);}
    else if(m == 0 || m == 2*c1){
        if(a1 == a2 && b1 == b2){a.push_back(-1);}
        else a.push_back(1);
    }
    else a.push_back(2);
}
int main(void){
    int test;
    std::cin >> test;
    int r1,r2;
    signed int x1,y1,x2,y2;
    for (int i = 0; i < test; i++){
        std::cin >> x1>>y1>>r1>>x2>>y2>>r2;
        if(r1 > r2) intersect(x2,y2,r2,x1,y1,r1);
        else intersect(x1,y1,r1,x2,y2,r2);
    }
    for (int k = 0; k < a.size(); k++){std::cout<< a[k] << std::endl;}
    return 0;
}
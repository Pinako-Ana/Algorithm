//blob된 픽셀을 찾아라임
//blob이란 상하좌우 대각선으로 연결되어있는거를 말함 어느 한 픽셀을 골랐을 때
//이 이미지 픽셀이 속한 blob의 사이즈를 리턴해주면 됨
//이미지 픽셀이 아니라면 0을 리턴해주고

#include <iostream>
#define N 8

int image[N][N] = {
    {0,0,1,0,1,1,1,0},
    {1,1,0,0,0,0,0,1},
    {0,1,0,0,1,0,0,1},
    {0,1,1,0,0,1,0,0},
    {1,0,0,0,0,1,0,0},
    {0,0,0,0,1,1,1,0},
    {0,0,0,1,0,1,0,1},
    {0,1,1,0,0,1,1,1},
};
int visited[N][N];
int cbs(int x, int y){
    if(x < 0 || y < 0 || x > N-1 || y > N-1) return 0;
    else if(image[x][y] == 0) return 0;
    else if(visited[x][y] == 1) return 0;
    else{
        visited[x][y] = 1;
        return 1 + cbs(x-1,y-1) + cbs(x-1,y) + cbs(x-1,y+1) + cbs(x,y-1) + cbs(x,y+1) + cbs(x+1,y-1) + cbs(x+1,y) + cbs(x+1,y+1);
    }; 
}

int main(void){
    printf("blob size is %d", cbs(7,7));
}
  
#include <iostream>
#include <stack>
// #include <algorithm>


using namespace std;

int maze[8][8] = {
    {0 ,0 ,0 ,0 ,0 ,0 ,0 ,1},
    {0 ,1, 1 ,0 ,1 ,1 ,0 ,1},
    {0 ,0 ,0 ,1 ,0 ,0 ,0 ,1},
    {0 ,1 ,0 ,0 ,1 ,1 ,0 ,0},
    {0 ,1 ,1 ,1 ,0 ,0 ,1 ,1},
    {0 ,1 ,0 ,0 ,0 ,1 ,0 ,1},
    {0 ,0 ,0 ,1 ,0 ,0 ,0 ,1},
    {0 ,1 ,1 ,1 ,0 ,1 ,0 ,0}
};

bool findpath(int x, int y){
    if(x < 0 || y < 0 || x > 7 || y > 7) return false;
    else if(x == 7 && y == 7){ 
        maze[x][y] = 2;
        return true;
    }
    else if(maze[x][y] == 1 || maze[x][y] == 2) return false;
    else{
        maze[x][y] = 2;//맞는길
        if(findpath(x,y+1) || findpath(x+1,y) || findpath(x,y-1) || findpath(x-1,y)){
            return true;
        }
        maze[x][y] = 3; // 방문하면 안되는 길
        return false;
    }
} 
void printmaze(){
    for (int i = 0; i < 8; i++){
        for (int j = 0; j < 8; j++){
            printf("%d ", maze[i][j]);
        }
        printf("\n");
    } 
}
    
int main(void){
    printmaze();
    findpath(0,0);
    printf("\n");
    printmaze();
}


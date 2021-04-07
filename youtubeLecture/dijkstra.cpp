#include <stdio.h>

int number = 6;
int INF = 1000000000;
// 전체 그래프를 초기화 하ㅏㅈ

int a[6][6]={
    {0,2,5,1,INF,INF},
    {2,0,3,2,INF,INF},
    {5,3,0,3,1,5},
    {1,2,3,0,1,INF},
    {INF,INF,1,1,0,2},
    {INF,INF,5,INF,2,0}
};
bool visited[6]; //방문한 노드
int dist[6]; //최단 거리

//가장 최소거리를 가지는 정점을 반환
int getSmallIndex(){
    int min = INF;
    int index = 0;
    for (int i = 0; i < number; i++){
        if(!visited[i] && dist[i] < min){
            min = dist[i];
            index = i;
        }
    }
    // printf("index is %d \n",index);
    return index;
}


//다익수트라 수행하는 함수

void dijkstra(int start){
    for (int i = 0; i < number; i++){
        dist[i] = a[start-1][i];
    }
    visited[start-1] = true;
    for (int i = 0; i < number-2; i++){
        int next = getSmallIndex();
        // printf("next is %d ",next);
        visited[next] = true;
        for (int j = 0; j < number; j++){
            if (!visited[j]){
                if (dist[next] + a[next][j] < dist[j]){
                    dist[j] = dist[next] + a[next][j];
                } 
            }
        }
    }
    for (int i = 0; i < number; i++){
        printf("%d ", dist[i]);
    } 
}
int main(void){
    dijkstra(2);
    return 0;
}
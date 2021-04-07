#include <iostream>
#include <vector>
#include <queue>
#define MAX 10001

using namespace std;
class Edge{ //간선 
    public:
        int node;
        int time;
        Edge(int node, int time){
            this->node = node;
            this->time = time;
        }
};

int n,start, finish;
int inDegree[MAX], result[MAX], c[MAX];
//inDegree - 진입차수 ,  result - 결과값 , c - 처리가 되었는지 여부 

vector<Edge> a[MAX];
vector<Edge> b[MAX];//역추적


void topolotySort(){
    queue<int> q;
    //시작점 노드 큐에 삽입
    q.push(start);
    //더이상 방문할 노드 없을때 까지 pop해준다
    while (!q.empty()){
        int x = q.front();
        q.pop();
        for (int i = 0; i < a[x].size(); i++){
            Edge y = Edge(a[x][i].node, a[x][i].time);
            if(result[y.node] <= y.time + result[x]){
                result[y.node] = y.time + result[x];
            }//임계 경로니까 더 오래걸리는 경로로 결과값 숴

            //새롭게 진입차수가 0이된 노드를 큐에 
            if(--inDegree[y.node] == 0){
                q.push(y.node);
            }
        } 
    }
    //결과를 역추적합니다.
    int count = 0; //임계 경로에 속한 모든 노드의 개수
    q.push(finish);
    while(!q.empty()){
        int y = q.front();
        q.pop();
        for (int i = 0; i < b[y].size(); i++){
            Edge x = Edge(b[y][i].node, b[y][i].time);
            //최장 경로에 포함되는 간선인지 확인합니다.
            if(result[y] - result[x.node] == x.time){
                count++;
                //큐에는 한 번씩 담아 추적합니다.
                if(c[x.node] == 0){
                    q.push(x.node);
                    c[x.node]= 1;
                }
            }
        }
    }
    printf("%d\n%d",result[finish],count);
}
int main(void){
    int m;
    scanf("%d %d",&n, &m);
    for (int i = 0; i < m; i++)
    {
        int x, node, time;
        scanf("%d %d %d", &x, &node, &time);
        a[x].push_back(Edge(node,time));
        b[node].push_back(Edge(x,time));
        inDegree[node]++;
    }
    scanf("%d %d", &start, &finish);
    topolotySort();    

}
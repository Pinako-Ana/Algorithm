#include <iostream>
#include <vector>
#include <queue>

int number = 6;
int INF = 1000000000;
using namespace std;

vector<pair<int, int> > a[7]; // 간선들의 정보 자신과 연결되어있는 정보들을 pair형태로 저장
int d[7]; // 최소비용

void dijkstra(int start){
    d[start] = 0;// 시작하려는 노드의 최소비용
    priority_queue<pair<int, int> > pq;// 힙구조라는데...
    //가까운 순서대로 처리하므로 큐를 사용한다
    //우선순위 큐는 큰 값부터 앞으로 가게 세팅이 되어있음
    pq.push(make_pair(0,start));
    while(!pq.empty()){
        int current = pq.top().second;
        //짧은것이 먼저 오도록 음수화 해준다.
        int distance = -pq.top().first;
        pq.pop();
        //최단경우가 아닌경우 스킵한다
        if(d[current] < distance) continue;
        for (int  i = 0; i < a[current].size(); i++){
           //선택된 노드의 인접노드
            int next = a[current][i].first;
            //선택된 노드 거쳐서 인접노드로 가는 비용
            int nextdistance = distance + a[current][i].second;
            if (nextdistance < d[next]){
                d[next] = nextdistance;
                pq.push(make_pair(-nextdistance, next));
            }
        }
    }
}
int main(void){
    for (int  i = 1; i <= number; i++){
        d[i] = INF;
    }

    a[1].push_back(make_pair(2,2));
    a[1].push_back(make_pair(3,5));
    a[1].push_back(make_pair(4,1));

    a[2].push_back(make_pair(1,2));
    a[2].push_back(make_pair(3,3));
    a[2].push_back(make_pair(4,2));

    a[3].push_back(make_pair(1,5));
    a[3].push_back(make_pair(2,3));
    a[3].push_back(make_pair(4,3));
    a[3].push_back(make_pair(5,1));
    a[3].push_back(make_pair(6,5));

    a[4].push_back(make_pair(1,1));
    a[4].push_back(make_pair(2,2));
    a[4].push_back(make_pair(3,3));
    a[4].push_back(make_pair(5,1));

    a[5].push_back(make_pair(3,1));
    a[5].push_back(make_pair(4,1));
    a[5].push_back(make_pair(6,2));

    a[6].push_back(make_pair(3,5));
    a[6].push_back(make_pair(5,2));

    dijkstra(5);

    for (int i = 1; i <= number; i++){
        printf("%d ",d[i]);
    }
    return 0;
}
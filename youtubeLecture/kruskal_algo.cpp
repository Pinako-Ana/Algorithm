// 모든 노드가 다 하나로 연결되는데 가장 적은 비용이 들게끔 하는 알고리즘
// 최소비용 신장트리
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int getParent(int parent[], int x){ //부모 노드 찾기
    if (parent[x] == x) return x;
    return parent[x] = getParent(parent, parent[x]);
}
int unionParent(int parent[], int a, int b){ //두 부모노드를 합치기
    a = getParent(parent,a);
    b = getParent(parent,b);
    if(a < b) parent[b] = a;
    else parent[a] = b;
    return 0;
}
int findParent(int parent[], int a, int b){ // 두 노드 의 부모노드가 같은지 체크
    a = getParent(parent,a);
    b = getParent(parent,b);
    if(a == b) return 1;
    return 0;
}

//간선의 정보를 담는 클래스 선언
class Edge {
public:
    int node[2];
    int distance;
    Edge(int a, int b, int distance){
        this->node[0] = a;
        this->node[1] = b; 
        this->distance = distance;
    }
bool operator < (const Edge &edge) const{
    return this->distance < edge.distance;
    }
};




int main(void){
    int n = 7;
    int m = 11;

    vector <Edge> v;
    v.push_back(Edge(1,7,12));
    v.push_back(Edge(1,4,28));
    v.push_back(Edge(1,2,67));
    v.push_back(Edge(1,5,17));
    v.push_back(Edge(2,4,24));
    v.push_back(Edge(2,5,62));
    v.push_back(Edge(3,5,20));
    v.push_back(Edge(3,6,37));
    v.push_back(Edge(4,7,13));
    v.push_back(Edge(5,6,45));
    v.push_back(Edge(5,7,73));
    //간선의 distance를 기준으로 오름차순 정렬
    sort(v.begin(), v.end());

    //각 정점이 포함된 그래프가 어딘지 저장
    int parent[n];
    for (int i = 0; i < n; i++) {
        parent[i] = i;
    }
    int sum = 0;
    for (int i = 0; i < v.size(); i++){
        // 사이클이 발생하지 않는 경우 그래프에 포함
        if(!findParent(parent,v[i].node[0]-1,v[i].node[1]-1)){
            sum += v[i].distance;
            unionParent(parent,v[i].node[0]-1,v[i].node[1]-1);
        }
    }
    printf("%d" ,sum);
    return 0;
}
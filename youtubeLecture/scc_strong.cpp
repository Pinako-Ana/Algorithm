//타잔 알고리즘을 사용할겁니다 다시 부모로 돌아올 수 있어야 SCC가 성립
//SCC는 위상정렬과 함께 사용하는 문제가 나옴
//SCC자체를 하나의 노드로 바라보고 그 노드들로 위상정렬을 하곤함
#include <iostream>
#include <vector>
#include <stack>
#define MAX 10001

using namespace std;

int id, d[MAX];
bool finished[MAX]; 
vector<int> a[MAX]; //노드당 간선정보
vector<vector<int> > SCC;
stack<int> s;

//DFS는 총 노드의 개수만큼 실행된다
int dfs(int x){
    d[x] = ++id; //노드마다 고유한 번호를 주는거임
    //우선순위를 가르기 위해서 ++id 로 한거임 노드 번호로 하면 안됨
    s.push(x); // 스택에 자기 자신 삽입

    int parent = d[x];//처음에는 자기자신이 부모가 되겠지
    for(int i = 0; i<a[x].size();i++){
        int next = a[x][i];

        if(d[next] == 0){
            //방문하지 않은 이웃 처리
            parent = min(parent,dfs(next));
        }else if(!finished[next]){
            //처리중인 이웃
            parent = min(parent,d[next]);
        }
    }
    if(parent == d[x]){
        vector<int> scc;
        while (1){
            int t = s.top();
            s.pop();
            scc.push_back(t);
            finished[t] = true;
            if(t==x) break;
        }
        SCC.push_back(scc);
    }
    //결과적으로 자신의 부모값을 반환
    return parent;
}
int main(void){
    int v = 11;
    a[1].push_back(2);
    a[2].push_back(3);
    a[3].push_back(1);
    a[4].push_back(2);
    a[4].push_back(5);
    a[5].push_back(7);
    a[6].push_back(5);
    a[7].push_back(6);
    a[8].push_back(5);
    a[8].push_back(9);
    a[9].push_back(10);
    a[10].push_back(11);
    a[11].push_back(3);
    a[11].push_back(8); 
    for (int i = 1; i <= v; i++){
        if (d[i] == 0) dfs(i);     
    }
    printf("SCC의 개수 : %lu\n", SCC.size());
    int count = SCC.size();
    for (int i = 0; i < count ;i++){
        printf("%d번째 SCC: ",i + 1);
        for (int j = 0; j < SCC[i].size(); j++){
            printf("%d ", SCC[i][j]);
        }
        printf("\n");
    }
    // printf("this is d[] element ");
    // for (int i = 1; i < 11; i++)
    // {
    //     printf("%d ", d[i]);
    // }
    
    return 0;
    

}
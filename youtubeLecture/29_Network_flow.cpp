//최대 유량 문제 네트워크 상에서 얼마나 많은 내용을 보낼 수 있나

#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

#define MAX 100
#define INF 1000000000

using namespace std;

int n = 6, result;
int c[MAX][MAX], f[MAX][MAX],d[MAX];
//c는 용량 f는 유량 d는 방문했는지 
vector<int> a[MAX];

void maxFlow(int start, int end){
    while(1){
        fill(d,d+MAX, -1);
        queue<int> q;
        q.push(start);
        while(!q.empty()){
            int x = q.front();
            q.pop();
            for (int i = 0; i < a[x].size(); i++){
                int next = a[x][i];
                if(c[x][next] - f[x][next] > 0 && d[next] == -1){
                    q.push(next);
                    d[next] = x;
                    if(next == end) break;
                }
            }   
        }
        if(d[end] == -1) break;
        int flow = INF; // 최소한의 유량을 찾아야함
        for (int  i = end; i != start; i = d[i]){
            flow = min(flow, c[d[i]][i] - f[d[i]][i]);
        }
        for (int  i = end; i != start; i = d[i]){
            f[d[i]][i] += flow;
            f[i][d[i]] -= flow;
        }
        result += flow;
    }
}

int main(void){
    a[1].push_back(2);
    a[2].push_back(1);
    c[1][2] = 12;    

    a[1].push_back(4);
    a[4].push_back(1);
    c[1][4] = 11; 

    a[2].push_back(3);
    a[3].push_back(2);
    c[2][3] = 6; 

    a[2].push_back(4);
    a[4].push_back(2);
    c[2][4] = 3; 

    a[2].push_back(5);
    a[5].push_back(2);
    c[2][5] =  5; 

    a[2].push_back(6);
    a[6].push_back(2);
    c[2][6] = 9; 

    a[3].push_back(6);
    a[6].push_back(3);
    c[3][6] = 8; 

    a[4].push_back(5);
    a[5].push_back(4);
    c[4][5] = 9; 

    a[5].push_back(3);
    a[3].push_back(5);
    c[5][3] = 3; 

    a[5].push_back(6);
    a[6].push_back(5);
    c[5][6] = 4; 

    maxFlow(1,6);
    printf("%d" ,result);

}


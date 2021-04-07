#include <iostream>
#include <stack>
#include <vector>

using namespace std;
int number = 7;
int visited[8];
vector<int> arr[8];

void dfs(int node){
    if(visited[node]) return;
    visited[node] = true;
    cout << node << ' ';
    for (int i = 0; i < arr[node].size(); i++){
        int l = arr[node][i];
        dfs(l);
    }
}


int main(void){
    arr[1].push_back(2);
    arr[1].push_back(3);
    arr[2].push_back(1);
    arr[2].push_back(3);
    arr[2].push_back(4);
    arr[2].push_back(5);
    arr[3].push_back(1);
    arr[3].push_back(2);
    arr[3].push_back(6);
    arr[3].push_back(7);
    arr[4].push_back(5);
    arr[5].push_back(4);
    arr[6].push_back(7);
    arr[7].push_back(6);

    dfs(1);
    return 0;
}
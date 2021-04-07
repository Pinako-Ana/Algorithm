#include <stdio.h>

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

int main(void){
    int parent[11];
    for (int i = 1; i < 11; i++){
        parent[i] = i;
    }
    unionParent(parent,1,2);
    unionParent(parent,2,3);
    unionParent(parent,3,4);
    unionParent(parent,5,6);
    unionParent(parent,6,7);
    unionParent(parent,7,8);
    
    printf("are node5, node1 connected? %d\n", findParent(parent, 1,5));
    unionParent(parent,1,6);
    printf("are node5, node1 connected? %d\n", findParent(parent, 1,5));
    printf("are node5, node1 connected? %d\n", findParent(parent, 1,7));

    printf("are node5, node1 connected? %d", findParent(parent, 4,7));
}
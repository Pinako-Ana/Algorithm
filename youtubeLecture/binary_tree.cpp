#include <iostream>

using namespace std;

int num_of_node = 15;
// 구조체를 쓸건데 클래스랑 비슷해 구조체에 함수를 추가한게 클래스임/
// 하나의 노드 정보를 선언한다

typedef struct node *treePointer;
typedef struct node{
    int data;
    treePointer leftChild, rightChild;
}node;

//전위순회
void preorder(treePointer ptr){
    if (ptr){
        cout << ptr->data <<' ';
        preorder(ptr->leftChild);
        preorder(ptr->rightChild);
    }        
}
//중위
void inorder(treePointer ptr){
    if (ptr){
        inorder(ptr->leftChild);
        cout << ptr->data <<' ';
        inorder(ptr->rightChild);
    }
}
//후위
void postorder(treePointer ptr){
    if (ptr){
        postorder(ptr->leftChild);
        postorder(ptr->rightChild);
        cout << ptr->data <<' ';
    }        
}

int main(void){
    node nodes[num_of_node + 1];
    for (int  i = 1; i <= num_of_node; i++){
        nodes[i].data = i;
        nodes[i].leftChild = NULL;
        nodes[i].rightChild = NULL;
    }
    
    for (int i = 1; i <= num_of_node; i++){
        if (i % 2 == 0) nodes[i/2].leftChild = &nodes[i]; 
        else nodes[i/2].rightChild = &nodes[i]; 
    }

    postorder(&nodes[1]);
}
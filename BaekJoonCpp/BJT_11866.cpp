#include <iostream>
#include <queue>

using namespace std;
int n,k;
queue<int > yose;
void yoseputh(){
	for (int i = 1; i < k; i++){
		yose.push(yose.front());
		yose.pop();
	}
	printf("%d",yose.front());
	if(yose.size() != 1) printf(", ");
	yose.pop();
}
int main(void){
 	scanf("%d %d",&n,&k);
	for (int i = 1; i <= n; i++) {yose.push(i);}
	printf("<");
	for (int l = 0; l < n; l++){yoseputh();} 
	printf(">");
	return 0;
}
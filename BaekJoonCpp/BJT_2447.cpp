#include <iostream>

using namespace std;

void star(int a){
	if(a == 1){
		
	}else{
		star(a/3);
		star(a/3);
		star(a/3);
	}
}

int main(void){
	int n; cin >> n;
	star(n);	
	return 0;
}
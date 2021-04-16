#include <iostream>
#include <algorithm>
using namespace std;
int jari[10];
bool compare(int a, int b){
	return a > b;
}
int main(void){
	int a,i=0;
	cin >> a;
	int n = a;
	while(n != 0){//자리수를 하나씩 빼서 배열에 넣어준다
		jari[i] = n%10;
		n /= 10;
		i++;
	}
	sort(jari,jari+10,compare);
	for (int p = 0; p < i; p++){
		cout << jari[p];
	}
	return 0;
}
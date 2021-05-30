#include <iostream> 
#include <stack>
#include <vector>
#include <deque>

using namespace std;


int NGF[1000001];
stack <int> A;
vector <int> B;
deque <int> C;
int N, j;
int check(int x, int y){
	for (int i = y-1; i < N; i++){
		if(NGF[x] < NGF[B[i]]){
			return B[i]; 
		}
	}
	return -1;
}
int main(void){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> N;
	for (int i = 0; i < N; i++){
		cin >> j;
		A.push(j);
		NGF[j]++;
		B.push_back(j);
	}
	int p = N;
	while(p--){
		C.push_front(check(A.top(), p));
		A.pop();
	}

	for (int i = 0; i < N; i++){
		cout << C[i] << " ";
	}
	


	return 0;
}



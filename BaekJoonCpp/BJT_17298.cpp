#include <iostream>
#include <stack>
#include <vector>
using namespace std;
vector <int > A;
stack <int > NGE, cmp;
int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
	int n,x; cin >> n;
	for (int i = 0; i < n; i++){
		cin >> x;
		A.push_back(x);
	}
	for (int k = n-1; k >= 0; k--){
		while(!cmp.empty() && cmp.top() <= A[k]) cmp.pop();
		if(cmp.empty()) NGE.push(-1);
		else NGE.push(cmp.top());
		cmp.push(A[k]);
	}
	for (int f = 0; f < n; f++){
		cout << NGE.top() << " ";
		NGE.pop();
	}
	return 0;
}
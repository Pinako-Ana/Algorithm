#include <iostream>
#include <stack>
using namespace std;
stack <int > A, NGE;
int main(void){
	int n,x; cin >> n;
	for (int i = 0; i < n; i++){
		cin >> x;
		A.push(x);
	}
	int pos, max1 = -1, nmax = -1;
	for (int k = 0; k < n; k++){
		pos = A.top();
		if(pos < max1){
			NGE.push(max1);
			if(nmax < max1) nmax = max1;
			max1 = pos;
		}else{
			if(!NGE.empty() && pos < NGE.top()) NGE.push(NGE.top());
			else if(!NGE.empty() && pos < nmax) NGE.push(nmax);
			else NGE.push(-1);
			max1 = pos;
		}
		A.pop();
	}
	for (int f = 0; f < n-1; f++){
		cout << NGE.top() << " ";
		NGE.pop();
	}
	cout << NGE.top();
	return 0;
}
#include <iostream>
#include <vector>
using namespace std;
vector<int> pstack;
int main(void){
	int k; cin >> k;
	int n,sum = 0;
	for (int i = 0; i < k; i++){
		cin >> n;
		if(n == 0) pstack.pop_back();
		else pstack.push_back(n);
	}
	for (int i = 0; i < pstack.size(); i++){ sum += pstack[i];}
	cout << sum;
	return 0;
}
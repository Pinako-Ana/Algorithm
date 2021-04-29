#include <iostream>
#include <stack>
using namespace std;
int main(void){
	int n,k,max=1; 
	stack <int> x;
	cin >> n;
	string result = "";
	int a[n];
	for (int i = 0; i < n; i++){ cin >> a[i]; }
	for (int i = 0; i < n; i++){
		for (k = max; k <= a[i]; k++){
			x.push(k);
			result += '+';
		}max = k;
		if(x.top() == a[i]){
			x.pop();
			result += '-';
		}else{
			cout << "NO";
			exit(0);
		}
	}
	for (int i = 0; i < result.length(); i++){ cout << result[i] << '\n';}
	return 0;
}
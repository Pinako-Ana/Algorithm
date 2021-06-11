#include <iostream> 
using namespace std;
void conversion(int q, int w){
    if(q == 0) return;
    conversion(q/w, w);
    cout << q%w << " ";
}
int main(void){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int A, B, m, t; cin >> A >> B >> m;
	int k = 0;
	for (int i = 0; i < m; i++){
		cin >> t;
        k = k * A + t;
	}
	conversion(k,B);
	return 0;
}
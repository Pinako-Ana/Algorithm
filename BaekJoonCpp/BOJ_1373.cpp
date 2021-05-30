#include <iostream> 
#include <string>
using namespace std;
int main(void){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string bnum,res = ""; cin >> bnum;
	int k = bnum.length()%3, cnt = 0, sum = 0;
	if(k == 1) 
		bnum == "0" ? res = '0' : res = '1';
	else if(k == 2) bnum[1] == '1' ? res += '3' : res += '2';
	for (int i = k; i < bnum.length() ; i++){
		cnt++;
		if(bnum[i] == '1') sum += (4 >> (cnt-1));
		if(cnt == 3){
			cnt = 0;
			res += (sum + '0');
			sum = 0;
		}
	}
	cout << res;
	return 0;
}
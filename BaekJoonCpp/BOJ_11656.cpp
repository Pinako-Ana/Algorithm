#include <iostream> 
#include <vector>
#include <algorithm>

using namespace std;
vector <string> arr;

int main(void){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string str; cin >> str;
	int k = str.length();
	for (int o = 0; o < str.length(); o++){
		string a(str,o,k);
		arr.push_back(a);
	}
	sort(arr.begin(),arr.end());
	for (int i = 0; i < k; i++)
		cout << arr[i] << '\n';	
	return 0;
}
#include <iostream> 

using namespace std;

int main(void){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int arr[26];
	fill_n(arr,26,-1);
	string str; cin >> str;
	for (int i = 0; i < str.length(); i++)
		if(arr[str[i] - 'a'] == -1) arr[str[i] - 'a'] = i;
	for (int i = 0; i < 26; i++)
		cout << arr[i] << " ";
	return 0;
}



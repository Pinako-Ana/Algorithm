#include <iostream> 
#include <vector>

using namespace std;

int main(void){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string str; 
	for(int j = 0; j < 100; j++){
		getline(cin, str);
		int arr[4] = {0,0,0,0};
		if(str.length() == 0) break;
		for (int i = 0; i < str.length(); i++){
			if(97 <= str[i] && str[i] <= 122) arr[0]++;
			else if(65 <= str[i] && str[i] <= 90) arr[1]++;
			else if(isdigit(str[i])) arr[2]++;
			else if(isspace(str[i])) arr[3]++;
		}
		for (int i = 0; i < 4; i++){
			cout << arr[i] << " ";
		}
		cout << '\n';
	}
	return 0;
}



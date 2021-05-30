#include <iostream> 
using namespace std;
int main(void){
	string str; getline(cin, str);
	for (int i = 0; i < str.length(); i++){
		if(isupper(str[i])) printf("%c", (((str[i] + 13) > 90) ? ((str[i] + 13) - 26) : (str[i] + 13)));
		else if(islower(str[i])) printf("%c", (((str[i] + 13) > 122) ? ((str[i] + 13) - 26) : (str[i] + 13)));
		else printf("%c",str[i]);
	}
	return 0;
}
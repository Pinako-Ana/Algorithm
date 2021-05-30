#include <iostream> 
#include <stack>
using namespace std;
int numOfPipes,pieces;
stack <char> st;
int main(void){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string razer;
	getline(cin,razer);
	for (int i = 0; i < razer.length(); i++){
		if(razer[i] == '(' && razer[i+1] == ')' && i < razer.length()-1){
			pieces += st.size();
			i++;
			continue;
		}else if(razer[i] == '(' ){
			st.push(razer[i]);
		}else if(razer[i] == ')'){
			pieces++;
			st.pop();
		}
	}
	cout << pieces;
	return 0;
}
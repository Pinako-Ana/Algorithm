#include <iostream> 
#include <string>
#include <vector>
using namespace std;

int main(void){
	string k = "";

	int a[3] = {3 ,4 ,5};
	vector <int > hello;
	for (int i = 0; i < 3; i++){
		hello.push_back((a[i]));
	}
	vector <int> bye(hello.begin(),hello.end());
	cout << hello[0];
	cout << bye[0];

	// for (int i = 0; i < bye.size(); i++)
	// {
	// 	cout << bye[i];
	// }
	

	return 0;
}
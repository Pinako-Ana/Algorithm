#include <iostream> 
#include <stack>

using namespace std;

struct pairs{
	char x;
	double y;
};

int N;
stack <double> value;
pairs arr[26];

double findnum(char a){
	int i,l;
	for (i = 0; i < N; i++)
		if(arr[i].x == a){	
			l = i;
			break;
		} 
	return arr[l].y;
}

int main(void){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;// 피연산자 개수
	string str; cin >> str;//후위 표기식
	pairs p;//char, double로 이루어진 쌍
	for (int i = 0; i < N; i++){
		cin >> p.y;
		p.x = 'A' + i;
		arr[i] = p;
	}

	for (int i = 0; i < str.length(); i++){
		if(isalpha(str[i])) value.push(findnum(str[i]));
		else{
			double num1, num2;
			num2 = value.top();
			value.pop();
			num1 = value.top();
			value.pop();
			if(str[i] == '*') value.push(num1 * num2);
			else if(str[i] == '/') value.push(num1 / num2);
			else if(str[i] == '+') value.push(num1 + num2);
			else if(str[i] == '-') value.push(num1 - num2);
		}
	}
	cout << fixed;
	cout.precision(2);
	cout << value.top();
	return 0;
}



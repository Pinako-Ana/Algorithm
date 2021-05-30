#include <iostream> 
#include <stack>

using namespace std;
stack <char> val;

int main(void){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string str, ans; cin >> str;

	for (int i = 0; i < str.length(); i++){
		// '(' 가 나오면 바로 push
		if(str[i] == '(')
			val.push(str[i]);

		// ')' 가 나오면 스택에서 '(' 가 나올때 까지 pop해준다 pop하면서 연산자들은 ans에 붙여줌
		else if(str[i] == ')'){
			while(!val.empty()){
				if(val.top() == '('){
					val.pop();
					break;
				}else{
					ans += val.top();
					val.pop();
				}
			}
		}

		// 피연산자는 바로 ans에 붙여줌
		else if(isalpha(str[i])) 
			ans += str[i];
		
		// 연산자가 나왔을 때
		else{ 
			while(!val.empty()){
				//스택의 top과 str[i]의 우선순위를 비교해야한다
				char x = val.top();
				if(x == '*' || x == '/')
					ans += x; //스택의 top이 곱셈이나 나눗셈일경우 str[i]에 뭐가오든 stack 의top 먼저 출력
				
				else if((x == '+' || x == '-') && (str[i] == '+' || str[i] == '-'))
					ans += x; // 스택의 top이 덧셈이나 뺄셈일 경우 str[i]도 덧셈이나 뻴셈이면 stack의 top출력
				
				else //위의 경우에 해당안되면 break;
					break;

				val.pop();
			}
			val.push(str[i]); //스택에 push해줌
		}
	}

	while(!val.empty()){ //스택에 있는 연산자들 모조리 출력
		ans += val.top();
		val.pop();
	}

	cout << ans;
	return 0;
}
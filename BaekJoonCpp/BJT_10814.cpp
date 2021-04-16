#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
struct inFo{
	int age;
	int num;
	string name;
};
vector< inFo > list;
bool compare(inFo a, inFo b){
	if(a.age == b.age) return a.num < b.num;
	else return a.age < b.age;
}
int main(void){
	int n, a;
	string na;
	scanf("%d",&n);
	for (int i = 0; i < n; i++){
		cin >> a >> na;
		inFo p = { a, i ,na };
		list.push_back(p);
	}//구조체 만들어서 가입한 순까지 같이 저장되게 함
	sort(list.begin(),list.end(),compare);
	for (int i = 0; i < n; i++){ cout << list[i].age << " " << list[i].name << '\n';}
	return 0;
}
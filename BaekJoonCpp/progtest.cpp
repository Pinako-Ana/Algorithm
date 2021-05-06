#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
map <int , int > m;
bool cmp(pair<int ,int> x,pair<int, int> y){
	return x.second > y.second;
}
void print_map(map<int, int> mp){
	for(const auto& k : mp){
		cout << k.first << " " << k.second << '\n';
	}
}
vector<int> solution(string s) {
    vector<int> answer;
    string k = "";
    bool switcher = false;
    for(int i = 1; i < s.length()-1; i++){
        if(s[i] == '{'){
            switcher = !switcher;
            continue;
        }
        if(isdigit(s[i]) && switcher) k += s[i];
        if(!isdigit(s[i]) && switcher){
            m[stoi(k)]++;
            k = "";
            if(s[i] == '}') switcher = !switcher;
        }
    }
    vector <pair <int, int> > a(m.begin(),m.end());
	sort(a.begin(),a.end(),cmp);
    for (int i = 0; i < a.size(); i++){ answer.push_back(a[i].first);}
    return answer;
}

int main(void){
	string str = "{{20},{20,1},{20,1,3},{20,1,3,4}}";
	solution(str);
	return 0;
}
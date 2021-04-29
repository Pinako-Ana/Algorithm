#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
string solution(vector<string> participant, vector<string> completion) {
	string answer = "";
    int s_c = completion.size();
	sort(participant.begin(),participant.end());
	sort(completion.begin(),completion.end());
	for(int i = 0 ; i < s_c; i++){
        if(participant[i] != completion[i]) answer = participant[i];
        if(i == s_c - 1) answer = participant[s_c];
    } 
	answer.length();
	return answer;
	

	

	
    // for(int i = 0; i < size_p; i++) m.push_back(make_pair(participant[i],i));
    // for(int j = 0; j < size_c; j++){
	// 	for (int k = 0; k < size_p; k++){
	// 		if(completion[j] == m[k].first) m[k].second = -1;
	// 	}
	// }
	// for (int p = 0; p < m.size(); p++){
	// 	if(m[p].second != -1){
	// 		answer = m[p].first;
	// 		break;
	// 	}
	// }
    return answer;
}
int main(void){return 0;}
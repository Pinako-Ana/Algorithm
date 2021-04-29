#include <iostream>
#include <string>
#include <vector>
using namespace std;

string solution(vector<int> numbers, string hand) {
    string answer = "";
    int l_thumb = 10, r_thumb =12,num;
    for(int i = 0;i < numbers.size();i++){
        num = numbers[i];
		if(num == 0) num = 11;
        if(num % 3 == 0){ answer += 'R'; r_thumb = num; }
        else if(num % 3 == 1){ answer += 'L'; l_thumb = num; }
        else if(num % 3 == 2){
            int r_res = (r_thumb % 3 == 2) ? abs(num - r_thumb) : abs(num + 1 - r_thumb);
            int l_res = (l_thumb % 3 == 2) ? abs(num - l_thumb) : abs(num - 1 - l_thumb);
            if(r_res == l_res){
                if(hand == "right") { answer += 'R'; r_thumb = num;}
                if(hand == "left") {answer += 'L'; l_thumb = num;}
            }else if(r_res > l_res) {answer += 'L'; l_thumb = num;}
            else if(l_res > r_res) { answer += 'R'; r_thumb = num;}
        }
    }   
    return answer;
}
int main(void){
	vector <int> number_list;
	number_list.push_back(2);
	number_list.push_back(5);
	number_list.push_back(3);
	number_list.push_back(9);
	number_list.push_back(4);
	number_list.push_back(3);
	number_list.push_back(5);
	number_list.push_back(8);
	number_list.push_back(8);
	number_list.push_back(0);

	cout << solution(number_list,"left");

	return 0;
}
#include <iostream>
#include <vector>
using namespace std;
int main(void){
	// int c1[5] ={1,2,3,4,5};
	// int c2[8] ={2,1,2,3,2,4,2,5};
	// int c3[10] ={3,3,1,1,2,2,4,4,5,5};
	// cout << sizeof(c2)/sizeof(int);

	// for(int i = 0; i<5; i++){
	// 	cout << i+1;
	// 	if(i == 4) i = -1;

	return 0;
}
	#include <string>
#include <vector>


using namespace std;
vector<int> solution(vector<int> answers) {
    vector <int> answer;
	int c1[5] ={1,2,3,4,5};
	int c2[8] ={2,1,2,3,2,4,2,5};
	int c3[10] ={3,3,1,1,2,2,4,4,5,5};
    int k =0 c1t= 0,c2t=0,c3t=0;
    for(int i = 0; i<5;i++){
        if(answers[k++] == c1[i]) c1t++;
        if(i == 4) i = -1;
        if(k == answers.size()) break;
    }
    for(int i = 0; i<8;i++){
        if(answers[k++] == c2[i]) c2t++;
        if(i == 7) i = -1;
        if(k == answers.size()) break;
    }

    for(int i = 0; i<10;i++){
        if(answers[k++] == c2[i]) c3t++;
        if(i == 9) i = -1;
        if(k == answers.size()) break;
    }
    if
    
    
    return answer;
}























	// int b[5] = {1,2,3,4,5};
	// int a[5];
	// int k = 0;
	// for (int i = 1; i <= 5; i++){
	// 	a[k++] = i;
	// 	if(i == 5) i = 0;
	// 	if(k == 5) break;
	// }
	// for (int i = 0; i < 5; i++){ if(b[i] == a[i]) c1++;}
	// cout << c1;
	// for (int i = 1; i <= 5; i++){
	// 	cout << 2;
	// 	if(i == 2) i++;
	// 	cout << i;
	// 	if(i == 5) i = 0;
	// }
	// int k= 1;
	// for (int i = 1; i <= 5; i++){
	// 	if(i == 1) k = 3;
	// 	else if(i == 2) k = 1;
	// 	else if(i == 3) k = 2;
	// 	else k = i;
	// 	cout << k << k;
	// 	if(i == 5) i = 0;
	// }
	// return 0;
// }
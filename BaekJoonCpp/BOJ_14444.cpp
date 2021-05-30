#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
 
using namespace std;
const int MAXN = 100001 * 2;
string tmp, str;
int A[MAXN];
bool cmp(int a, int b){
	return a > b;
}
void manachers(string S, int N){
    int r = 0, p = 0;
    for (int i = 0; i < N; i++){
		// printf("i == %d\n",i);
        if (i <= r){
            A[i] = min(A[2 * p - i], r - i);
			// cout << A[i] << '\n';
		}else{
            A[i] = 0;
			// cout << A[i] << '\n';
		}
		//배열의 범위 벗어나지 않으면서 양쪽 끝 값이 같으면 A[i]의 값을 키워나가는거임
        while (i - A[i] - 1 >= 0 && i + A[i] + 1 < N && S[i - A[i] - 1] == S[i + A[i] + 1]){
            A[i]++;
			// cout << A[i] << '\n';
		}
        if (r < i + A[i]){//r은 최대 길이의 회문의 오른쪽 끝 index
            r = i + A[i];
            p = i;
			// cout << "r, p = " << r << ", " << p << '\n';
        }
    }
}
int main(){
    cin >> tmp;
    int len = tmp.size();
    for (int i = 0; i < len; i++){
        str += '#';
        str += tmp[i];
    }
    str += '#';
    manachers(str, str.size());
    len = str.size();
	sort(A,A+len,cmp);
    printf("%d", A[0]);
    return 0;
}



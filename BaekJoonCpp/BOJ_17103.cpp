#include <iostream>

using namespace std;
int arr[1000001];

int main(void){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	for (int i = 2; i < 1000; i++){
		if(arr[i] == 1) continue;
		for (int j = 2*i; j < 1000001; j += i)
			arr[j] = 1;
	}//arr[] = 0 인게 소수
	int T,N,cnt; cin >> T;
	for (int i = 0; i < T; i++){
		cin >> N;
		cnt = 0;
		for (int j = 2; j <= N/2; j++)
			if(arr[j] == 0 && arr[N-j] == 0) cnt++;
		cout << cnt << '\n';
	}
	return 0;
}
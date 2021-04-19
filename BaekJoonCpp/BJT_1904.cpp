#include <iostream>

using namespace std;
int main(void){
	int n;
	cin >> n;
	int arr[n+1];
	arr[1] = 1;
	arr[2] = 2;
	for (int i = 3; i <= n; i++)
		arr[i] = (arr[i-2] + arr[i-1]) % 15746;
	cout << arr[n];
	return 0;
}
//피보나치랑 동일했다
//dp에대해서 아직 많이 부족하다 확실히 공부해야함
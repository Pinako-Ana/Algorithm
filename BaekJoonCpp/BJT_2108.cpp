#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;
int a[500000];
int k[8001];

int average(int x){
	double result = 0;
	for (int i = 0; i < x; i++){result += a[i];}
	return round(result/x);
}//double로 해줘야함

int middle(int x){return a[x/2];}

int highfrequency(int x){
	int max = 0;
	int pos, cnt = 0;
	for (int i = 0; i < x; i++){
		k[a[i]+4000]++;
	}
	for (int j = 0; j < 8001; j++){
		if(k[j] >max){
			max = k[j];
		}
	}
	for (int l = 0; l < 8001; l++){
		if(k[l] == max){
			pos = l;
			cnt++;
		}
		if(cnt == 2){return pos - 4000;}
	}
	return pos - 4000;
}//8001개의 배열을 두고 4000을 기준으로  -4000~4000까지로 사용함

int range(int x){return a[x-1] - a[0];}

int main(void){
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	sort(a,a+n);
	cout << average(n) << endl;
	cout << middle(n) << endl;
	cout << highfrequency(n) << endl;
	cout << range(n) << endl;
	return 0;
}
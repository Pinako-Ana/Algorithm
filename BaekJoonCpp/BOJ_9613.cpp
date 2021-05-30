#include <iostream> 

using namespace std;
int arr[100];
int tc, n,m; 

long long binarygcd(int a, int b){
	long long n, exp = 0;
	while(~(a|b) & 1){ //두 수가 짝수인지 확인
		exp++;//둘 다 짝수라는 건 둘 다 2를 갖고 있다는 뜻
		a >>= 1;
		b >>= 1;
	}
	while(a * b){ //둘 중 하나가 짝수면 2로 계속 나눠줌
		while(~a & 1) a >>= 1;
		while(~b & 1) b >>= 1;
		if(a > b) a -= b; // 큰수에서 작은수 계속빼다보면
		else b -= a;	  // 하나가 0이 됨
	}
	if(a) n = a; // 둘 중 0 아닌거를 n에 넣어주고
	else n = b;
	return n << exp; // 이 뜻은 즉 (2^exp) * n 을 
}

long long gcdsum(){
	long long sum = 0;
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			sum += binarygcd(arr[i],arr[j]);
	return sum;
}

int main(void){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> tc;
	for (int i = 0; i < tc; i++){
		cin >> n;
		for (int k = 0; k < n; k++)
			cin >> arr[k];
		cout << gcdsum() << '\n';
	}
	return 0;
}
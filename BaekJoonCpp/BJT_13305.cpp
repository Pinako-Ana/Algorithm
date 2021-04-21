#include <iostream>
using namespace std;
long long n,sum;
long long minn = 1000000001;
long long dist[100000];
long long city[100001];//도시마다 기름값

int main(void){
	cin >> n;
	
	for (int i = 1; i <= n-1; i++){ cin >> dist[i];}
	for (int i = 1; i <= n; i++){ cin >> city[i];}

	for (int i = 1; i <= n-1; i++){
		if(minn > city[i])
			minn = city[i];
		sum += minn * dist[i];
	}

	cout << sum;
	return 0;
}
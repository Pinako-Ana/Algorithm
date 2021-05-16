#include<iostream>
#include<algorithm>
using namespace std;
int home[200000];

int main(){
	int N, C,R = 0; cin >> N >> C;
	for (int i = 0; i < N; i++) cin >> home[i];
	sort(home,home+N);
	int start = 1, end = home[N-1] - home[0];
	while(start <= end){
		int mid = (end + start)/2;
		int cnt = 1;
		int prevPlantIndex = 0;
		for (int i = 0; i < N; i++){
			if(mid <= (home[i] - home[prevPlantIndex])){
				cnt++;
				prevPlantIndex = i;
			}
		}
		if(cnt >= C){
			R = max(mid, R);
			start = mid + 1;
		}else end = mid - 1;
	}

	cout << R;
	return 0;
}
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
//세그먼트 트리 생성 함수 트리의 값에는 최소길이막대의 index가 들어간다 @@중요
void init(vector<long long> &a,vector <long long> &tree, int n, int start, int end ){
	if(start == end){
		tree[n] = start;
	}else{
		int mid = (start + end)/2;
		init(a,tree,2*n,start,mid);
		init(a,tree,2*n + 1, mid + 1, end);
		tree[n] = (a[tree[2*n]] <= a[tree[2*n + 1]]) ? tree[2*n] : tree[2*n + 1]; 
	}
}

//애는 길이가 최소인 막대의 index를 리턴함
int query(vector<long long >&a, vector <long long> &tree, int n,int start, int end,int i, int j){
	if(i > end || start > j) return -1;
	if(i <= start && end <= j) return tree[n];//전체범위에서 젤 작은건 현재 트리의 최상단 노드니까
	int mid = (start + end)/2;
	int m1 = query(a,tree,2*n,start,mid,i,j);
	int m2 = query(a,tree,2*n + 1,mid +1, end,i,j);
	if(m1 == -1) return m2;
	else if(m2 == -1) return m1;
	else{
		if(a[m1] <= a[m2])return m1;
		else return m2;
	}
}
//start와 end사이에서의 최대 넓이 직사각형을 구하는 함수
long long largest(vector <long long> &a, vector<long long> &tree, int start, int end){
	//얘는 최솟값의 위치, 즉 인덱스임
	int mini = query(a,tree,1,0,(int)a.size()-1,start,end);
	
	//넓이를 구해줌 밑변 X 높이
	long long area = (long long)(end + 1 - start)*(long long)a[mini];

	//mini 즉 최소길이 막대의 index를 기준으로 분할이 이루어짐
	if(start <= mini-1) {
		long long temp = largest(a,tree, start,mini-1);
		if(area < temp) area = temp;
	}
	if(mini+1 <= end){
		long long temp = largest(a,tree,mini+1, end);
		if(area < temp) area = temp;
	}
	return area;
}
int main(void){
	while (1){
		int n;
		cin >> n;
		if(n == 0) break;
		vector <long long> a(n);
		for (int i = 0; i < n; i++) cin >> a[i];
		//a라는 배열에 히스토그램 막대들 넣어줌
		int t_h = (int)ceil(log2(n)+1e-9);//세그먼트 트리 높이
		int t_size = (1<<(t_h+1)); //트리의 사이즈 
		vector <long long> tree(t_size);//트리를 새로 만들어준다
		init(a,tree,1,0,n-1);
		cout << largest(a,tree,0,n-1) << '\n';
	}
	return 0;
}
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;
vector <int> arr;
int mygcd(int a, int b){
	if(b == 0) return a;
	return mygcd(b,a%b);
}
int EEA(int a, int b){ 
	int r1,r2,s1,s2,t1,t2,r,s,t,q;
	if(a > b) r1 = a, r2 = b;
	else r1 = b, r2 = a;
	s1 = 1;
	s2 = 0;
	t1 = 0;
	t2 = 1;
	while(r2){
		q = r1 / r2;
		r = r1 % r2;
		r1 = r2 , r2 = r;

		s = s1 - q * s2;
		s1 = s2, s2 = s;

		t = t1 - q * t2;
		t1 = t2, t2 = t;
	}
	s = s1, t = t1;
	if(a < b) swap(s,t);
	// while(s < 0) s += b;
	return s;
}
int mymod(int a, int b){return (a < 0) ? a % b + b : a % b;}
int main(void){
	int tc,x,y,a,b,answer; 
	scanf("%d",&tc);
	for(int i = 0; i< tc;i++){
		scanf("%d %d %d %d", &x,&y,&a,&b);
		if(x == a && y == b) answer = x * y / mygcd(x,y);
		else if(mymod(b-a,y) % mygcd(x,y) != 0) answer = -1;
		else {
			int a1 = EEA(x,y);
			// printf("this is a1 %d\n",a1);
			// printf("gcd is %d\n",mygcd(x,y));
			// printf("mymod is %d\n",x*mymod(abs(a - b)*a1,y) + a);
			if(mygcd(x,y) == 1)
				answer = x*mymod(mymod(b-a,y)*a1,y) + a;
			else
				answer = mymod(x*a1*mymod(b-a,y)/mygcd(x,y) + a, x*y/mygcd(x,y));
		}
		arr.push_back(answer);
		// printf("%d\n",answer);
	}

	for (int i = 0; i < arr.size(); i++){
		printf("%d\n",arr[i]);
	}
	
	return 0;
}
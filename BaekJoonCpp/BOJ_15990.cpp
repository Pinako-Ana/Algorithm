#include <cstdio>
#define N 100000
int p[N][3],M=1e9+9,n,t;
int main(void){p[0][0]=p[1][1]=p[2][0]=p[2][1]=p[2][2]=1;
	for(int j=3; j<N;j++){
		p[j][0]=(p[j-1][1]+p[j-1][2])%M;
		p[j][1]=(p[j-2][0]+p[j-2][2])%M;
		p[j][2]=(p[j-3][0]+p[j-3][1])%M;
	}for(scanf("%d",&t);t--;){
		scanf("%d",&n);
		printf("%d\n",((p[n-1][0]+p[n-1][1])%M+p[n-1][2])%M);
	}return 0;
}
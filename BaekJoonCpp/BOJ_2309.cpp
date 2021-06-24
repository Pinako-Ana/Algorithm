#include <cstdio>
#include <algorithm>
// using namespace std;
// int main(void){
// 	int dwarflist[9],sum = 0;
// 	bool realdwarf[9] = {1,1,1,1,1,1,1,0,0};
// 	for (int i = 0; i < 9; i++) scanf("%d",&dwarflist[i]);
// 	sort(dwarflist,dwarflist+9);
// 	do{
// 		for (int i = 0; i < 9; i++) if(realdwarf[i]) sum += dwarflist[i];
// 		if(sum == 100) {
// 			for (int i = 0; i < 9; i++) if(realdwarf[i]) printf("%d\n",dwarflist[i]);
// 			break;
// 		}
// 	} while (prev_permutation(realdwarf,realdwarf+9));
// }

int main(void){
	int d[9],s=0;
	for(int i=0;i<9;i++) scanf("%d",&d[i]),s+=d[i];
	for(int i=0;i<8;i++)for(int j=i+1;j<9;j++)
			if(s-d[i]-d[j]==100){
				d[i]=d[j]=0;
				i=j=9;
			}
	std::sort(d,d+9);
	for(int i=2;i<9;i++)printf("%d\n",d[i]);
}
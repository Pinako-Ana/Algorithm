#include <cstdio>
#include <algorithm>
using namespace std;
// void combination(vector<int> &a, vector<int> &b, int index, int depth){
// 	if(depth == b.size()){
// 		for (int i = 0; i < b.size(); i++)
// 			printf("%d ", b[i]);
// 		printf("\n");
// 		return ;
// 	}else{
// 		for (int i = index; i < a.size(); i++){
// 			b[depth] = a[i];
// 			combination(a,b,i+1,depth+1);
// 		}
// 	}
// }
// int main (void){
// 	int tc; 
// 	while(1){
// 		scanf("%d", &tc);
// 		if(tc == 0) break;
// 		vector <int> k(tc);
// 		vector <int> lotto(6);
// 		for (int i = 0; i < tc; i++) scanf("%d", &k[i]);
// 		combination(k,lotto,0,0);
// 		printf("\n");
// 	}
// 	return 0;
// }
// int main(void){
// 	int tc;
// 	while(1){
// 		scanf("%d",&tc);
// 		if(tc == 0) break;
// 		vector<int> k(tc);
// 		vector<bool> lotto(tc,true);
// 		for (int i = 0; i < 6; i++) lotto[i] = false;
// 		for (int i = 0; i < tc; i++) scanf("%d", &k[i]);
// 		do{
// 			for (int i = 0; i < tc; i++)
// 				if(lotto[i] == false)
// 					printf("%d ",k[i]);
// 			printf("\n");
// 		} while (next_permutation(lotto.begin(),lotto.end()));
// 		printf("\n");
// 	}
// 	return 0;
// }


int main(void){
	int tc, k[49];
	bool l[49] = {false,};
	while(1){
		scanf("%d",&tc);
		if(tc == 0)break;
		for (int i = 0; i < tc; i++) scanf("%d",&k[i]);
		for (int i = 0; i < 6; i++) l[i] = true;
		do{
			for (int i = 0; i < tc; i++)
				if(l[i] == true) printf("%d ",k[i]);
			printf("\n");
		} while (prev_permutation(l,l+tc));
		printf("\n");
	}
	return 0;
}
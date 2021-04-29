#include <iostream>
#include <queue>
int main(void){
	std::queue <int> card;
	int n; scanf("%d",&n);
	for (int i = 1; i <= n; i++){card.push(i);}
	while(card.size()>1){
		card.pop();
		card.push(card.front());
		card.pop();
	}
	printf("%d",card.front());
	return 0;
}
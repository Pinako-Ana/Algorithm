#include <iostream>

using namespace std;

int money[8][2];
void change_machine(int change){
    money[7][0] = 10;
    money[6][0] = 50;
    money[5][0] = 100;
    money[4][0] = 500;
    money[3][0] = 1000;
    money[2][0] = 5000;
    money[1][0] = 10000;
    money[0][0] = 50000;

    int i;
    int mychange = change;
    while(1){
        money[i][1] = mychange / money[i][0];
        mychange = mychange % money[i][0];
        if(mychange == 0) break;
        i++;
    }
    for (int l = 0; l < 8; l++){
        if (money[l][1] == 0) continue;
        printf("%5d원 %d개\n", money[l][0],money[l][1]);
    }
    
}

int main(void){
    int cash;
    cin >> cash;
    change_machine(cash);
}
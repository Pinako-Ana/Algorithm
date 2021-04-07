#include <iostream>

int count = 0;
int change(int money){
    int chn = 1000 - money;
   
        count += chn / 500;
        chn %= 500;

        count += chn / 100;
        chn %= 100;
  
        count += chn / 50;
        chn %= 50;
   
        count += chn / 10;
        chn %= 10;
 
        count += chn / 5;
        chn %= 5;
  
        count += chn / 1;
        chn %= 1;
        
    return count;
}
int main(void){
    int pay;
    std::cin >> pay;
    printf("%d\n",change(pay));
}
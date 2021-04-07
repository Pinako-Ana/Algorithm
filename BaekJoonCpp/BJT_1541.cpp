#include <iostream>
#include <string>

int calculator(std::string y){
    std::string t = "";
    t = y; 
    std::string d = "";
    int minuspos = 0;
    int sum = 0;
    minuspos = (int)t.find("-",0);
    for (int i = 0; i < t.size(); i++){
        d += t[i];
        if(t[i] == '+' || i == t.size()-1){
            sum += stoi(d);
            d = "";
        }
        if(t[i] == '-'){
            sum += stoi(d);
            d = "";
            break;
        }
    }
    if(minuspos == -1) return sum;
    for (int j = minuspos+1; j < t.size(); j++){
        d += t[j];
        if(t[j] == '-' || t[j] == '+' || j == t.size()-1){
            sum -= stoi(d);
            d = "";
        }
    }
    return sum;
}
int main(void){
    std::string x = "";
    std::cin >> x;
    printf("%d\n", calculator(x));
    return 0;
}
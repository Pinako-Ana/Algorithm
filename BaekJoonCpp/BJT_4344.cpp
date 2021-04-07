#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main(void){
    int testcase, nOfS, grade;
    double sum, avg, count, rate;
    cin >> testcase;
    vector<int> a[testcase];
    for (int  i = 0; i < testcase; i++){
        cin >> nOfS;
        for (int k = 0; k < nOfS; k++){
            cin >> grade;
            a[i].push_back(grade);
        }
    }
    for (int i = 0; i < testcase; i++){
        sum = 0;
        avg = 0;
        count = 0;
        int size = a[i].size();
        for (int l = 0; l < size; l++){sum += a[i][l];}
        avg = sum / size;
        for (int k = 0; k < size; k++){
            if (a[i][k] > avg) count += 1;
        }
        rate = floor(((count/size)*100 + 0.0005)*1000)/1000;
        printf("%.3f%%\n",rate);
        
    }
    
    return 0;
}







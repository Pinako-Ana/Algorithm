#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int main(void){
    int testcase,freshman,doc,intv;
    cin >> testcase;
    int a[21];

    for (int i = 0; i < testcase; i++){
        cin >> freshman;
        int count=0, min = 1000001;
        vector<pair<int, int> > grade;
        for (int j = 0; j < freshman; j++){
            cin >> doc >> intv;
            grade.push_back(make_pair(doc,intv));
        }
        sort(grade.begin(),grade.end());

        for (int k = 0; k < freshman; k++){
            if(min > grade[k].second){
                min = grade[k].second;
                count++;
            }
        }
        a[i] = count;
    }

    for (int l = 0; l < testcase; l++){
        cout << a[l] << endl;
    }
    
    
    return 0;
}
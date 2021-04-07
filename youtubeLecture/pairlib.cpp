#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<string, pair<int,int> > a, pair<string, pair<int,int> > b){
    if(a.second.first == b.second.first){
        return a.second.second > b.second.second;
    }else{
        return a.second.first > b.second.first;
    }
}
int main(void){
    vector<pair<string, pair<int,int> > > v;
    v.push_back(pair<string, pair<int,int> >("안영진",pair<int, int>(90,19941029)));
    v.push_back(pair<string, pair<int,int> >("허양지",pair<int, int>(92,19950213)));
    v.push_back(pair<string, pair<int,int> >("최준성",pair<int, int>(12,19950110)));
    v.push_back(pair<string, pair<int,int> >("한영일",pair<int, int>(43,19940727)));
    v.push_back(pair<string, pair<int,int> >("서승환",pair<int, int>(43,19960523)));

    sort(v.begin(), v.end(),compare);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << ' ';
    }
    
}
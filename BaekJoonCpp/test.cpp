#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main(void) {
    vector<string> a;
    a.push_back("mislav");
    a.push_back("stanko");
    a.push_back("mislav");
    a.push_back("ana");
    sort(a.begin(),a.end());
    for (int i = 0; i < 4; i++)
    {
        cout << a[i] << ' ';
    }
    
    return 0;
}
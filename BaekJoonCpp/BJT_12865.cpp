#include <iostream>
#include <vector>


int main(void){
    int num,l_weight,t_weight,value,max=0;
    std::vector< std::pair<int, int> > a[101];

    std::cin >> num >> l_weight;
    for (int i = 0; i < num; i++){
        std::cin >> t_weight >> value;
        a[i].push_back(std::make_pair(t_weight,value));
    }
    
    
    

    std::cout << max << std::endl;
    return 0;
}
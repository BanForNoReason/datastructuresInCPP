#include <iostream>
#include <vector>
#include <algorithm>



int main() {

    std::vector<char> v = {'a','b','c','d','e'};

    //delete last element 'e'
    v.pop_back();

    v.erase(find(v.begin(), v.end(), 'd'));

    for(int i = 0; i < v.size(); i++) {
        std::cout<<v[i]<< " ";
    }

}
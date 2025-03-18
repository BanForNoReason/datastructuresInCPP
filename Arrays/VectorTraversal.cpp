#include <vector>
#include <iostream>


int main() {

    std::vector<char> v = { 'a','b','c','d','e'};

    for(int i = 0; i < v.size(); i++) {
        std::cout<< v[i]<<" ";
    }

    return 0;
}
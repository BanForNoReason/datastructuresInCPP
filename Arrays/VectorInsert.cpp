#include <vector>
#include <iostream>
using namespace std;

int main () {
    vector<char> v = { 'a', 'b', 'c', 'd'};

    v.push_back('z'); //inserting z at the back

    //inserting 'j' at index 1
    v.insert(v.begin() + 1, 'j');

    for (int i = 0; i < v.size(); i++){
        cout<< v[i] << " ";
    }
    return 0;
}
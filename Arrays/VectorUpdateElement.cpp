#include <vector>
#include <iostream>

using namespace std;

int main() {
    vector<char> v = {'a', 'b', 'c', 'd'};

    v[1] = 'B';
    v.at(2) = 'C';

    cout<< v[1]<<endl;
    cout<< v.at(2);

    return 0;
}
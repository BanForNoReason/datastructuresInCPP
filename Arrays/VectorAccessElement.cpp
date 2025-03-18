#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<char> v = { 'a', 'b', 'f', 'd', 'z'};

    cout << v[3] <<endl;
    cout << v.at(2);

    return 0;
}
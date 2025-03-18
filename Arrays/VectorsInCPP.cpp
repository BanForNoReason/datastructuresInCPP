// Reference Source: https://www.geeksforgeeks.org/vector-in-cpp-stl/
// Useful document for C++ keywords: https://www.geeksforgeeks.org/keywords-in-c/?ref=next_article
#include <vector>
#include <iostream>
using namespace std;

void printVector(vector<int>& v){
    for (auto x: v){
        cout << x << " ";
    }
    cout<<endl;
}

int main () {
    //creating an vector with initializer list
    vector<int> vector1 = {1, 2, 3, 4, 5};
    //creating a vector with default values
    vector<int> vector2(5,9);


    printVector(vector1);
    printVector(vector2);
    return 0;
}
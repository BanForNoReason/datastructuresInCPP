// Reference Source: https://www.geeksforgeeks.org/vector-in-cpp-stl/
// Useful document for C++ keywords: https://www.geeksforgeeks.org/keywords-in-c/?ref=next_article
#include <vector>
using namespace std;

int main () {
    //creating an vector with initializer list
    vector<int> vector1 = {1, 2, 3, 4, 5};
    //creating a vector with default values
    vector<int> vector2(5,9);


    return 0;
}
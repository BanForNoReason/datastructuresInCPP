// Input: arr[] = [10, 20, 30, 40, 50]
// Output: 10 30 50
// Explanation: Print the first element (10), skip the second element (20), print the third element (30), skip the fourth element(40) and print the fifth element(50).


// Input: arr[] = [-5, 1, 4, 2, 12]
// Output: -5 4 12

#include <iostream>
#include <vector>

using namespace std;

vector<int> alternateElement(const vector<int>& arr) {
    // if the index of the array is even then we print it
    // can be done using modulo to find even and odd indexs
    vector<int> result;

    for(int i = 0; i < arr.size(); i += 2){
        result.push_back(arr[i]);
    }
    return result;
}

int main() {
    vector<int> arr1 = {10, 20, 30, 40, 50};
    vector<int> arr2 =  {-5, 1, 4, 2, 12};
    vector<int> res = alternateElement(arr2);

    for (int x : res) {
        cout << x << " ";
    }

    return 0;
}
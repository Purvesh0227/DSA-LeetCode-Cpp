#include <iostream>
#include <vector>
using namespace std;

class problem1 {
public:
    int largest(vector<int> &arr) {
        int maxVal = arr[0];
        for (int i = 1; i < arr.size(); i++) {
                    if (arr[i] > maxVal) {
                maxVal = arr[i];
            }
        }
        return maxVal;
    }
};

int main() {
    problem1 s;  // correct object instantiation
    vector<int> arr = {1, 4, 6, 2, 7, 9};  // correct vector declaration
    cout << s.largest(arr) << endl;  // print the result
}
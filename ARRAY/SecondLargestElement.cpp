#include <bits/stdc++.h>
#include<iostream>
using namespace std;
class secondlargest{
    public:
        int secondlarg(vector <int> &arr){
            int n = arr.size();
            int largest = arr[0];
            for(int i=1;i<n;i++){
                if(arr[i]>largest){
                    largest = arr[i];
                }
            }
            int secondl = -1;
            for(int i=0;i<n;i++){
                if(arr[i]>secondl && arr[i]<largest){
                    secondl = arr[i];
                }
            }
            return secondl;
        }
};

int main(){
    vector<int> arr = {10, 5, 8, 12, 15};
    secondlargest obj;
    int result = obj.secondlarg(arr);
    if(result != -1){
        cout << "The second largest element is: " << result << endl;
    } else {
        cout << "There is no second largest element." << endl;
    }

}
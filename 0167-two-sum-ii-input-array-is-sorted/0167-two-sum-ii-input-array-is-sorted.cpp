class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int t) {
        int left = 0;
        int right = arr.size()-1;

        while(left<right){
            int sum = arr[left]+arr[right];
            if(sum == t){
                return {left+1,right+1};
            }
            if(sum < t){
                left++;
            }
            else{
                right--;
            }
        }
    return {};    
    }

};
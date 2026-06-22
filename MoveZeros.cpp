class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // int n = nums.size();
        // vector<int> arr;  
        // int count = 0;    

        // for (int i = 0; i < n; i++) {
        //     if (nums[i] != 0) {
        //         arr.push_back(nums[i]); 
        //     } else {
        //         count++; 
        //     }
        // }

 
        // for (int i = 0; i < count; i++) {
        //     arr.push_back(0); 
        // }

        // nums = arr;  
        int left = 0;
        for(int right=0;right<nums.size();right++){
            if(nums[right]!=0){
                swap(nums[left],nums[right]);
                left++;
            }
        }
    }
};
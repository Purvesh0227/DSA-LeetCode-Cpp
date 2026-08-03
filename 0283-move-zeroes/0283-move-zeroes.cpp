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
        int i = 0;
        for(int j=0;j<nums.size();j++){
            if(nums[j]!=0){
                swap(nums[i],nums[j]);
                i++;   
            }
        }
    }
};
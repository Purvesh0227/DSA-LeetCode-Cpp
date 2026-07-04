class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        // int n = nums.size();
        // int first = -1;
        // int last = -1;

        // for(int i = 0; i < n; i++) {
        //     if(nums[i] == target) {
        //         if(first == -1) {
        //             first = i;
        //         }
        //         last = i;
        //     }
        // }

        // return {first, last};

        int first = lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        if(first == nums.size() || nums[first]!=target ){
            return {-1,-1};
        }
        int last = upper_bound(nums.begin(),nums.end(),target)-nums.begin()-1;

        return {first,last};

        
    }
};
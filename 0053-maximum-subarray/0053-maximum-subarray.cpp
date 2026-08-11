class Solution {
public:
    int maxSubArray(vector<int>& nums) {

    //     int maxsum = INT_MIN ,cursum = 0;
    //     for(int i : nums){
    //         cursum+=i;
    //         if(cursum>maxsum){
    //             maxsum=cursum;
    //         }
    //         if(cursum<0)
    //         {
    //             cursum = 0;
    //         }
    //     }
    //     return maxsum;
        
    // }
    // int n = nums.size();
    // int maxi = nums[0];
    // int curr  = nums[0];
    // for(int i=1;i<n;i++)
    // {
    //     curr = max(nums[i],curr+nums[i]);
    //     maxi = max(maxi,curr);
    // }
    // return maxi;
    // }


    int n = nums.size();
    int maxsum = nums[0];
    int cursum = 0;
    for(int i:nums){
        cursum+=i;
        if(cursum>maxsum){
            maxsum = cursum;
        }
        if(cursum<0){
            cursum = 0;
        }
    }
    return maxsum;
    }
};
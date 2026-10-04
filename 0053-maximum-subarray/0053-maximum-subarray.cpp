class Solution {
public:
    int maxSubArray(vector<int>& nums) {
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
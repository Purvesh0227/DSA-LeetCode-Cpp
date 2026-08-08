class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        // int sum1 = (n*(n+1))/2;
        // int sum2=0;
        // for(int i:nums){
        //     sum2+=i;
        // }
        // return sum1-sum2;
        int res = n;
        for(int i=0;i<n;i++){
            res^=i^nums[i];
        }
        return res;
    }
};
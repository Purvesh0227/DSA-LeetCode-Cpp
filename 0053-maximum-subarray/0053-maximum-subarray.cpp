class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int maxsum = INT_MIN ,cursum = 0;
        for(int i : nums){
            cursum+=i;
            if(cursum>maxsum){
                maxsum=cursum;
            }
            if(cursum<0)
            {
                cursum = 0;
            }
        }
        return maxsum;
        
    }
};
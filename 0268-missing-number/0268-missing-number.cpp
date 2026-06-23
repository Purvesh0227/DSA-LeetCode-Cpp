class Solution {
public:
    int missingNumber(vector<int>& nums) {
        vector<int> hash(nums.size()+1,0);
        for(int i=0;i<nums.size();i++){
            hash[nums[i]]=1;
        }
        for(int j=0;j<=nums.size();j++){
            if(hash[j]==0){
                return j;
            }
        }
        return -1;
    }
};
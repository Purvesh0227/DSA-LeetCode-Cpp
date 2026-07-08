class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> count;
        for(int i:nums){
            count[i]++;
        }
        vector<int> res;
        for(auto& [num,c]:count){
            if(c>nums.size()/2) return num;
        }
        return -1;
    }
};

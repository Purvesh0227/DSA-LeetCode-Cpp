class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> count;
        for(int x : nums) count[x]++;
        vector<int> res;
        for(auto [num,cnt] : count){
            if(cnt>nums.size()/3) res.push_back(num);
        }
        return res;
    }
};
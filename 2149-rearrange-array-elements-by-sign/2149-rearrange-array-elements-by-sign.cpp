class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n);
        int pos = 0,neg=1;
        for(int i:nums){
            if(i>0){
                res[pos] = i;
                pos+=2;
            }
            else{
                res[neg] = i;
                neg+=2;
            }
        }
        return res;
    }
};
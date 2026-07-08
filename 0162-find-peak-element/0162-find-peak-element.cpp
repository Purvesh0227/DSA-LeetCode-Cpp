class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n;i++){
            bool leftok = (i==0) || (nums[i] > nums[i-1]) ;
            bool rightok = (i==n-1) || (nums[i] > nums[i+1]) ;
        if(leftok && rightok){
            return i;
        }
        }
        return -1;
    }
};
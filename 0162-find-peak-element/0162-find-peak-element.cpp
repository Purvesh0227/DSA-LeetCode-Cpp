class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        // int n = nums.size();
        // for(int i=0;i<n;i++){
        //     bool leftok = (i==0) || (nums[i] > nums[i-1]) ;
        //     bool rightok = (i==n-1) || (nums[i] > nums[i+1]) ;
        // if(leftok && rightok){
        //     return i;
        // }
        // }
        // return -1;
        int low = 0;
        int high = nums.size()-1;
        while(low<high){
            int mid = low+(high-low)/2;
            if(nums[mid] > nums[mid+1]){
                high = mid;
            }
            else{
                low=mid+1; 
            }
        }
        return low;
    }
};
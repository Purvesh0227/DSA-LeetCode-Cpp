class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        // int start = 0, end = n - 1;

        // while (start < end) {
        //     int mid = start + (end - start) / 2;

        //     // Make mid even
        //     if (mid % 2 == 1) mid--;

        //     if (nums[mid] == nums[mid + 1]) {
        //         start = mid + 2;
        //     } else {
        //         end = mid;
        //     }
        // }
        // return nums[start];
        int x = 0;
        for(int i=0;i<n;i++){
            x = x ^ nums[i];
        }
        return x;
    }
};

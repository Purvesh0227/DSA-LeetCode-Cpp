class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Pairing  each element with its index
        // vector<pair<int,int>> arr;
        // for(int i = 0; i < nums.size(); i++) {
        //     arr.push_back({nums[i], i});
        // }

       
        // sort(arr.begin(), arr.end());

        
        // int start = 0;
        // int end = arr.size() - 1;

        // while(start < end) {
        //     int sum = arr[start].first + arr[end].first;
        //     if(sum == target) {
        //         return {arr[start].second, arr[end].second}; // 
        //     }
        //     else if(sum > target) {
        //         end--;
        //     }
        //     else {
        //         start++;
        //     }
        // }
        // return {};

        unordered_map<int,int>m;
        vector<int> ans;
        int n = nums.size();

        for(int i = 0;i<n;i++)
        {
            int first = nums[i];
            int second = target - first;
            if(m.find(second)!=m.end())
            {
                ans.push_back(i);
                ans.push_back(m[second]);
                break;
            }
            m[first] = i;
        }
        return ans;
    }
};

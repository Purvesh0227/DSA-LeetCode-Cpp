// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         // Pairing  each element with its index
//         // vector<pair<int,int>> arr;
//         // for(int i = 0; i < nums.size(); i++) {
//         //     arr.push_back({nums[i], i});
//         // }

       
//         // sort(arr.begin(), arr.end());

        
//         // int start = 0;
//         // int end = arr.size() - 1;

//         // while(start < end) {
//         //     int sum = arr[start].first + arr[end].first;
//         //     if(sum == target) {
//         //         return {arr[start].second, arr[end].second}; // 
//         //     }
//         //     else if(sum > target) {
//         //         end--;
//         //     }
//         //     else {
//         //         start++;
//         //     }
//         // }
        // return {};

//         unordered_map<int,int>m;
//         vector<int> ans;
//         int n = nums.size();

//         for(int i = 0;i<n;i++)
//         {
//             int first = nums[i];
//             int second = target - first;
//             if(m.find(second)!=m.end())
//             {
//                 ans.push_back(i);
//                 ans.push_back(m[second]);
//                 break;
//             }
//             m[first] = i;
//         }
//         return ans;
//     }
// };
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         map<int,int> mpp;
//         int n = nums.size();
//         for(int i=0;i<n;i++){
//             int num = nums[i];
//             int more = target-num;
//             if(mpp.find(more)!=mpp.end()){
//                 return {mpp[more],i};
//             }
//             mpp[num]=i;
//         }
//         return {-1,-1};
//     }
// };

// 

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        vector<int> result;
        int n = nums.size();
        for(int i=0;i<n;i++){
            int first = nums[i];
            int second = target-first;
            if(m.find(second)!=m.end()){
                result.push_back(i);
                result.push_back(m[second]);
                break;
            }
            m[first]=i;
        }
    return result;
    }
};
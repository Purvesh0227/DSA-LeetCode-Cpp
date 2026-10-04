
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         unordered_map<int,int> m;
//         int n = nums.size();
//         for(int i=0;i<n;i++){
//             int need = target-nums[i];
//             if(m.count(need)){
//                 return {m[need],i};
//             }
//             m[nums[i]]=i;
//         }
//         return {};
//     }
// };


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> m;
        vector<int> result;
        for(int i=0;i<n; i++){
            int first = nums[i];
            int second = target - first;

            if(m.find(second) != m.end()){
                result.push_back(i);
                result.push_back(m[second]);
                break;
            }

            m[first] = i;
        }
    return result;
    }

};
// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         unordered_map<int,int> count;
//         for(int i:nums){
//             count[i]++;
//             if(count[i]>nums.size()/2) return i;
//         }    
//     return -1;
//     }
// };

//moyre moore
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int candidate = 0;
        for(int i:nums){
            if(count == 0){
                candidate = i;
            }

            if(i == candidate){
                count+=1;
            }
            else
            {
                count-=1;
            }
        }
        return candidate;
    }
};
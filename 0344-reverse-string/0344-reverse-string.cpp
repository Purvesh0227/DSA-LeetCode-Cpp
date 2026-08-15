class Solution {
public:
    void reverseString(vector<char>& s) {
        
        int n = s.size()-1;
        int right=n;
        int left = 0;
        while(left<right){
            swap(s[left],s[right]);
            left++;
            right--;
        }
    }
};
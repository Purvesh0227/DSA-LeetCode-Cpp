class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        vector<int> ans;

        int n = s.size();
        int k = p.size();

        if(n < k)
            return ans;

        vector<int> pFreq(26, 0);
        vector<int> window(26, 0);

        for(char ch : p)
            pFreq[ch - 'a']++;

        for(int i = 0; i < k; i++)
            window[s[i] - 'a']++;

        if(window == pFreq)
            ans.push_back(0);

        for(int i = k; i < n; i++) {

            window[s[i] - 'a']++;

            window[s[i - k] - 'a']--;

            if(window == pFreq)
                ans.push_back(i - k + 1);
        }

        return ans;
    }
};
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        vector<int> ans;

        if (s.size() < p.size())
            return ans;

        vector<int> pFreq(26, 0);
        vector<int> windowFreq(26, 0);

        // Count frequency of p
        for (char ch : p) {
            pFreq[ch - 'a']++;
        }

        int k = p.size();

        for (int i = 0; i < s.size(); i++) {

            // Add current character
            windowFreq[s[i] - 'a']++;

            // Remove character outside the window
            if (i >= k) {
                windowFreq[s[i - k] - 'a']--;
            }

            // Compare frequencies
            if (windowFreq == pFreq) {
                ans.push_back(i - k + 1);
            }
        }

        return ans;
    }
};
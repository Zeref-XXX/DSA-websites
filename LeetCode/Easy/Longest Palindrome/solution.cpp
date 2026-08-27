class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> mpp;
        for (auto ch : s) {
            mpp[ch]++;
        }
        int length = 0;
        bool has_odd = false;
        for (auto value : mpp) {
            if (value.second % 2 == 0)
                length += value.second;
            else {
                has_odd = true;
                length += value.second - 1;
            }
        }
        if (has_odd)
            length += 1;
        return  length;
    }
};
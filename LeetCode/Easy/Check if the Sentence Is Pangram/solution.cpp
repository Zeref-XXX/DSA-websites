class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int> ans(26, 0);
        for (auto ch : sentence) {
            ans[ch - 'a']++;
        }
        for (auto value : ans)
            if (value == 0)
                return false;

        return true;
    }
};
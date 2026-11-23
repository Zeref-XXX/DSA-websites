class Solution {
public:
    bool checkString(string s) {
        bool found = false;
        for (int i = 0; i < s.length(); i++) {
            if (found && s[i] == 'a')
                return false;
            if (s[i] == 'b')
                found = true;
        }
        return true;
    }
};
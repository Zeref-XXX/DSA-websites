class Solution {
public:
    string reverseWords(string s) {
        vector<string> vcc;
        string temp;
        int i = 0;
        while (i < s.size()) {
            if (s[i] != ' ')
                temp += s[i];
            if (s[i] == ' ' && temp.size() > 0) {
                vcc.push_back(temp);
                temp = "";
            }
            i++;
        }
        if (!temp.empty())
            vcc.push_back(temp);

        string ans;
        reverse(vcc.begin(), vcc.end());
        for (auto v : vcc)
            cout << v;

        for (int i = 0; i < vcc.size(); i++) {
            ans += vcc[i];
            if (i < vcc.size() - 1)
                ans += " ";
        }

        return ans;
    }
};
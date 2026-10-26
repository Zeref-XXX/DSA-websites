class Solution {
public:
    vector<string> Par(int n, int l, int r, vector<string>& ans, string temp) {

        if (n == l && l == r) {
            ans.push_back(temp);
            temp.pop_back();
        }

        // left
        if (l < n) {
            temp.push_back('(');
            Par(n, l + 1, r, ans, temp);
            temp.pop_back();
        }
        // right
        if (r < l) {
            temp.push_back(')');
            Par(n, l, r + 1, ans, temp);
            temp.pop_back();
        }
        return ans;
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string temp;
        Par(n, 0, 0, ans, temp);
        return ans;
    }
};
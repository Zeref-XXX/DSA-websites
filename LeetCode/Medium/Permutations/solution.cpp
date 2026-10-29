class Solution {
public:
    void per(vector<int>& nums, vector<vector<int>>& ans, vector<int> temp,
             vector<bool>& visited) {
        if (temp.size() == nums.size()) {
            ans.push_back(temp);
            return;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (visited[i] == 0) {
                temp.push_back(nums[i]);
                visited[i] = 1;
                per(nums, ans, temp, visited);
                visited[i] = 0;
                temp.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        vector<bool> visited(nums.size(), 0);

        per(nums, ans, temp, visited);

        return ans;
    }
};
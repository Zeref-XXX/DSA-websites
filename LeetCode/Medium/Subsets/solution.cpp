class Solution {
public:
    void subSeq(vector<int>& nums, int index, int n, vector<vector<int>>& ans,
                vector<int> temp) {
        if (n == index) {
            ans.push_back(temp);
            return;
        }
        subSeq(nums, index + 1, n, ans, temp);
        temp.push_back(nums[index]);
        subSeq(nums, index + 1, n, ans, temp);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;

        subSeq(nums, 0, nums.size(), ans, temp);

        return ans;
    }
};
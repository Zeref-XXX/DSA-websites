class Solution {
public:
    void per(vector<int>& nums, vector<vector<int>>& ans, int index) {
        if (index == nums.size()) {
            ans.push_back(nums);
            return;
        }
        vector<int> track(21, 0);
        for (int i = index; i < nums.size(); i++) {
            if (track[nums[i] + 10] == 0) {
                swap(nums[i], nums[index]);
                per(nums, ans, index + 1);
                swap(nums[i], nums[index]);
                track[nums[i] + 10] = 1;
            }
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;

        per(nums, ans, 0);

        return ans;
    }
};
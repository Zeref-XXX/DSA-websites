class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int size = nums.size();
        vector<int> v(size);
        // int suff = nums[size - 1];
        v[size - 1] = nums[size - 1];
        for (int i = size - 2; i >= 0; i--) {
            // suff = nums[i];
            v[i] = max(nums[i], v[i + 1]);
        }
        for (auto a : v)
            cout << a << " ";
        int ans = -1;

        for (int i = 0; i < size - 1; i++) {
            if (v[i + 1] - nums[i] > 0)
                ans = max(ans, v[i + 1] - nums[i]);
        }

        return ans;
    }
};
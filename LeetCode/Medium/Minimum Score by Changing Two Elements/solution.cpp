class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        sort(begin(nums), end(nums));
        int n = nums.size();
        return min({
            nums[n - 2 ] - nums[1], // n-1=n-2 & n[0]=1
            nums[n - 1] - nums[2], // 0,1=3
            nums[n - 3] - nums[0]  // n-1,2=n-1
        });
    }
};
class Solution {
public:
    map<int, int> mpp;
    int climbStairs(int n) {
        if (mpp[n] > 0)
            return mpp[n];
        else {
            if (n == 0)
                return 1;
            if (n < 0)
                return 0;
        }
        mpp[n] = climbStairs(n - 1) + climbStairs(n - 2);
        return mpp[n];
    }
};
class Solution {
public:
    bool judgeSquareSum(int c) {
        long long l = 0;
        long long r = sqrt(c);
        //   cout<<r;
        while (l <= r) {
            long long sum = l * l + r * r; //can be  optimized by subrtracting the r*r from c in if statemetn and comparing 
            if (sum == c)
                return true;
            else if ((l * l + r * r) > c)
                r--;
            else
                l++;
        }
        return false;
    }
};

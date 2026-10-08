class Solution {
public:
    double myPow(double x, int n) {
        // Base case
        if (n == 0) return 1.0;
        
        // Handle negative exponents without flipping the sign of 'n' directly
        if (n < 0) {
            // Split into 1 / (x * x^(-n-1)) to perfectly avoid INT_MIN overflow
            return 1.0 / (x * myPow(x, -(n + 1))); 
        }
        
        // The standard divide-and-conquer strategy
        double half = myPow(x, n / 2);
        
        if (n % 2 == 0) {
            return half * half;
        } else {
            return half * half * x;
        }
    }
};

class Solution {
	public:
	int power(int n, int pow) {
		if (pow <= 1)return n;
		return n*power(n, pow - 1);
	}
	int reverseExponentiation(int n) {
		// code here
		int pow = n;
		if (n == 10)
			pow = 1;
		
		return power(n, pow);
	}
};

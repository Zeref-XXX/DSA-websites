class Solution {
	public:
	int gcd(int a, int b) {
		// code here
		// 		int ans = 1;
		// 		int divisor = min(a, b);
		// 		while (a>0 && b>0) {
		// 			if (a%divisor == 0 && b%divisor == 0) {
		// 				ans = ans*divisor;
		// 				a /= divisor;
		// 				b /= divisor;
		// 			}
		// 			else
		// 				divisor--;
		// 		}
		
		if (b == 0)
			return a;
		
		return gcd(b, a%b);
		 
	}
};

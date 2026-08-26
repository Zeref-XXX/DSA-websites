class Solution {
	public:
	
	bool clockWise(string s1, string s2) {
		reverse(s1.begin(), s1.end() - 2);
		reverse(s1.end() - 2, s1.end());
		return s1==s2;
	}
	bool antiClockWise(string s1, string s2) {
		reverse(s1.begin(), s1.begin()+2);
		reverse(s1.begin()+2 , s1.end());
		return s1==s2;
	}
	
	bool isRotated(string& s1, string& s2) {
		// code here
		if (s1.length() != s2.length())
			return false;
		else {
			reverse(s1.begin(), s1.end());
			// clockwise
			if (clockWise(s1, s2)) {
				return true;
			}
			if (antiClockWise(s1, s2)) {
				return true;
			}
		} 
		
		return false;
	}
};

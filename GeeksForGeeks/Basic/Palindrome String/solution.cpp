class Solution {
	public:
	bool Check(string &s, int start, int end) {
		
		if (start >= end)
			return true;
		if (s[start] != s[end])
			return false;
		
		return Check(s, start + 1, end - 1);
	}
	
	bool isPalindrome(string& s) {
		// code here
		
		return Check(s, 0, s.length() - 1);
	}
};

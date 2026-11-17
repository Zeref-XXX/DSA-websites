class Solution {
	public:
	
	void solve(vector<string>&ans, string s, int n, int ones, int zeros) {
		if (s.size() == n) {
			ans.push_back(s);
			return;
		}
		solve(ans, s + "1", n, ones + 1, zeros);
		if (ones>zeros) {
			solve(ans, s + "0", n, ones, zeros + 1);
		}
	}
	
	vector<string> nBitBinary(int n) {
		
		vector<string>ans;
		
		solve(ans, "", n, 0, 0);
		return ans;
		
	}
};

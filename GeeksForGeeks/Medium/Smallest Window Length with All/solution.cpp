class Solution {
	public:
	int findSubString(string& s) {
		// different chars present count
		set<char>d;
		for (int i = 0; i<s.size(); i++)
			d.insert(s[i]);
		
		int distinctChars = d.size();
		
		unordered_map<char, int>mpp;
		int first = 0, second = 0;
		int ans = s.size();
		
		while (second<s.size()) {
			mpp[s[second]]++;
			while (mpp.size() == distinctChars) {
				ans = min(ans, second - first + 1);
				mpp[s[first]]--;
				if (mpp[s[first]] == 0)
					mpp.erase(s[first]);
				first++;
			}
			second++;
		}
		
		return ans;
	}
};

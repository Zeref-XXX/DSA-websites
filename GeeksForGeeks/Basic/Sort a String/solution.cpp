class Solution {
	public:
	string sortString(string &s) {
		// code here
		vector<int>ans(26, 0);
		for (int i = 0; i<s.length(); i++)
			ans[s[i]-'a']++;
		string a;
		for (int i = 0; i<26; i++) {
			char c = i + 'a';
			while (ans[i]) {
				a += c;
				ans[i]--;
			}
		}
		
		return a;
	}
};

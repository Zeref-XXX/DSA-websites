class Solution {
	public:
	string caseSort(string& s) {
	 
		multiset<char>upper;
		multiset<char>lower;
		for (auto ch: s) {
			if (ch >= 'A' && ch <= 'Z')
				upper.insert(ch);
			else
				lower.insert(ch);
		}
		auto upit = upper.begin();
		auto loit = lower.begin();
		
		for (int i = 0; i<s.length(); i++) {
			if (s[i] >= 'A' && s[i] <= 'Z') {
				s[i] = *upit; upit++;
			}
			else {
				s[i] = *loit; loit++;
			}
		}
		return s;
	}
};

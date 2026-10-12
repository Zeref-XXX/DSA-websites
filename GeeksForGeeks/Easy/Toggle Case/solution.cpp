class Solution {
	public:
	string toggleCase(string &s) {
		// code here
		// 		int n1 = 'a' - 32;
		// 		int n2 = 'A';
		
		// 		string se = n1 - '0';
		// 		cout << se;
		for (int i = 0; i<s.length(); i++) {
			char c = s[i];
			if (c<97) {
				s[i] = s[i]+32;
			}
			else
				s[i] = s[i]-32;
			
		}
		
		return s;
	}
};

class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        unordered_set<char> s = {'a', 'e', 'i', 'o', 'u'};
        int ans = 0;
        for (int i = left; i <= right; i++) {
            string word = words[i];
            if (s.contains(word[0]) && s.contains(word[word.length() - 1])) {
                ans++;
                cout << "first " << word[0] << "last "
                     << word[word.length() - 1] << endl;
            }
        }
        return ans;
    }
};
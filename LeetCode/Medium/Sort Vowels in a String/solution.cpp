class Solution {
public:
    string sortVowels(string s) {
        // vector<int> vec(10, 0);
        map<char, int> mpp;
        set<char> sec = {'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'};
        for (int i = 0; i < s.length(); i++) {
            if (sec.contains(s[i])) {
                mpp[s[i]]++;
                s[i] = '#';
            }
        }
        auto map_it = mpp.begin();
        for (int i = 0; i < s.length(); i++) {
            while (map_it != mpp.end() && map_it->second == 0)
                map_it++;
            if (s[i] == '#') {
                s[i] = map_it->first;
                map_it->second--;
            }
        }

        return s;
    }
};
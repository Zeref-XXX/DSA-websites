class Solution {
public:
    string defangIPaddr(string address) {
        string str;
        for (char s : address) {
            if (s == '.')
                str += "[.]";
            else
                str += s;
        }
        return str;
    }
};
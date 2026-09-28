class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;
        int start = 0;
        int end=0;
        vector<int>vec(256,0);
        while(end<s.size()){
            while(vec[s[end]]){
                vec[s[start]]=0;
                start++;
            }
            vec[s[end]]++;
            ans=max(ans,end-start+1);
            end++;
        }
        return ans;

    }
};
class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1,
                                    vector<vector<int>>& nums2) {
        vector<vector<int>> ans;

        int i = 0, j = 0;
        while (i < nums1.size() && j < nums2.size()) {
            vector<int> temp;
            if (nums1[i][0] == nums2[j][0]) {
                int sum = nums1[i][1] + nums2[j][1];
                temp.push_back(nums1[i][0]);
                temp.push_back(sum);
                i++;
                j++;
            } else if (nums1[i][0] < nums2[j][0]) {
                temp.push_back(nums1[i][0]);
                temp.push_back(nums1[i][1]);
                i++;
            } else {
                temp.push_back(nums2[j][0]);
                temp.push_back(nums2[j][1]);
                j++;
            }
            ans.push_back(temp);
        }
        while (i < nums1.size()) {
            vector<int> temp;
            temp.push_back(nums1[i][0]);
            temp.push_back(nums1[i][1]);
            i++;
            ans.push_back(temp);
        }
        
        while (j < nums2.size()) {
            vector<int> temp;
            temp.push_back(nums2[j][0]);
            temp.push_back(nums2[j][1]);
            j++;
            ans.push_back(temp);
        }

        return ans;
    }
};
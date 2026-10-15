class Solution {
public:
    // Need to use temporary array or use modulo to store two value in one place
    // which require some mathematics
    void Merge(vector<int>& nums, int start, int mid, int right, int end) {
        int s = start;
        vector<int> temp;

        if (nums[mid] <= nums[right])
            return;
        while (start <= mid && right <= end) {
            if (nums[start] <= nums[right]) {
                temp.push_back(nums[start]);
                start++;
            } else {
                temp.push_back(nums[right]);
                right++;
            }
        }
        while (start <= mid) {
            temp.push_back(nums[start]);
            start++;
        }
        while (right <= end) {
            temp.push_back(nums[right]);
            right++;
        }
        for (int i = 0; i < temp.size(); i++) {
            nums[s + i] = temp[i];
        }
    }

    void MergeSort(vector<int>& nums, int start, int end) {

        if (start >= end)
            return;
        int mid = start + (end - start) / 2;
        MergeSort(nums, start, mid);
        MergeSort(nums, mid + 1, end);
        // mergingi
        Merge(nums, start, mid, mid + 1, end);
    }
    vector<int> sortArray(vector<int>& nums) {

        MergeSort(nums, 0, nums.size() - 1);
        return nums;
    }
};
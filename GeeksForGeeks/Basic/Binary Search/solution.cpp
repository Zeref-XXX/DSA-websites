class Solution {
	public:
	int bsearch(vector<int>& nums, int start, int end, int target) {
		if (start > end)
			return false;
		int mid = start + (end - start) / 2;
		if (nums[mid] == target)
			return true;
		else if (nums[mid] > target)
			return bsearch(nums, start, mid - 1, target);
		else
			return bsearch(nums, mid + 1, end, target);
	}
	
	bool binarySearch(vector<int>& arr, int k) {
		// code here
		
		return bsearch(arr, 0, arr.size() - 1, k);
		
	}
};

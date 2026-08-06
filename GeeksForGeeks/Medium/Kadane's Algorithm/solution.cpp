class Solution {
	public:
	int maxSubarraySum(vector<int> &arr) {
		// Code here
		int ans = INT_MIN;
		int psum = 0;
		for (int i = 0; i<arr.size(); i++) {
			psum += arr[i];
			
			ans = max(psum, ans);
			
			if (psum<0)psum = 0;
			
		}
		return ans;
	}
};

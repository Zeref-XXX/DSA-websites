class Solution {
	public:
	bool isProduct(vector<int>& arr, long long target) {
		// code here
		sort(arr.begin(), arr.end());
		long long ans = -1;
		long long start = 0, end = arr.size() - 1;
		while (start<end) {
			
			long long mul = (long long)arr[start]*arr[end];
			if (mul == target)
				return true;
			else if (mul>target)end--;
			else
				start++;
			
		}
		
		return false;
	}
};

class Solution {
	public:
	int minTime(vector<int>& arr, int k) {
		int ans = -1;
		int start = 0, end = 0;
		for (auto num:arr) {
			end += num;
			if (num>start)
				start = num;
		}
		while (start <= end) {
			int mid = start + (end - start)/2;
			int count = 1, paint = 0;
			
			for (int i = 0; i<arr.size(); i++) {
				paint += arr[i];
				if (paint>mid) {
					paint = arr[i]; count++;
				}
			}
			if (count <= k) {
				ans = mid; end = mid - 1;
			}
			else
				start = mid + 1;
		}
		return ans;
	}
};

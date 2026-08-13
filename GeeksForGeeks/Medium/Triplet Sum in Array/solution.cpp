class Solution {
	public:
	bool hasTripletSum(vector<int> &arr, int target) {
		// Code Here
		sort(arr.begin(), arr.end());
		
		for (int i = 0; i<arr.size(); i++) {
			int rem = target - arr[i];
			int left = i + 1;
			int right = arr.size() - 1;
			while (left<right) {
				int sum = arr[left]+arr[right];
				if (sum == rem)
					return true;
				else if (sum<rem)left++;
				else
					right--;    
			}
		}
		return false;
	}
};

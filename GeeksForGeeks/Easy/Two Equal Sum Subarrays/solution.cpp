class Solution {
	public:
	bool canSplit(vector<int>& arr) {
		// TLE
		// 		for (int i = 1; i<arr.size(); i++) {
		// 			int sum1 = 0, sum2 = 0;
		// 			for (int j = 0; j<i; j++)
		// 				sum1 += arr[j];
		// 			for (int j = i; j<arr.size(); j++)
		// 				sum2 += arr[j];
		// 			if (sum1 == sum2)return true;
		// 		}
		// 		return false;
		int total_sum = 0;
		for (auto num:arr) {
			total_sum += num;
		}
		int newSum = 0;
		for (int i = 0; i<arr.size(); i++) {
			newSum += arr[i];
			int rem = total_sum - newSum;
			if (rem == newSum)
				return true;
		}
		return false;
		
	}
};

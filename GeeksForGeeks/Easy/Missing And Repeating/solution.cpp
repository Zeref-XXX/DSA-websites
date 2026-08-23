class Solution {
	public:
	vector<int> findTwoElement(vector<int>& arr) {
		int n = arr.size();
		// dec one
		for (int i = 0; i<n; i++)
			arr[i]--;
		// add n
		for (int i = 0; i<n; i++)
			arr[arr[i]%n] += n;
		
		int missing = 0, repeating = 0;
		
		for (int i = 0; i<n; i++) {
			if (arr[i]/n == 0)
				missing = i + 1;
			if (arr[i]/n == 2)
				repeating = i + 1;
		}
		
		return {repeating, missing};
		
	}
};

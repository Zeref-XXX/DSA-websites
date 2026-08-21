class Solution {
	public:
	bool searchMatrix(vector<vector<int>> &mat, int x) {
		// code here
		int rows = mat.size();
		int cols = mat[0].size();
		
		int i = 0, j = cols - 1;
		
		while (i<rows && j >= 0) {
			if (mat[i][j] == x)
				return true;
			else if (mat[i][j]>x)
				j--;
			else
				i++;
		}
		return false;
		
	}
};

class Solution {
	public:
	void ro(vector<vector<int>> & mat) {
		int rows = mat.size();
		int cols = mat[0].size();
		// 		transpose
		for (int i = 0; i<rows; i++)
			for (int j = i + 1; j<cols; j++)
				swap(mat[i][j], mat[j][i]);
		
		// swap
		for (int row = 0; row<rows ; row++) {
			for (int col = 0; col<cols/2; col++) {
				swap(mat[row][col], mat[row][cols - 1-col]);
			}
		}
	}
	void rotateMatrix(vector<vector<int>> & mat) {
		// code here
		ro(mat); ro(mat);
		
	}
	
};

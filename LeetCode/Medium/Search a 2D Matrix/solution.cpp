class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int col = matrix[0].size();
        int outerStart = 0, outerEnd = rows - 1;

        while (outerStart <= outerEnd) {
            int i = (outerStart + outerEnd) / 2;
            if (matrix[i][0] <= target && target <= matrix[i][col - 1]) {
                int start = 0, end = col - 1;
                while (start <= end) {
                    int mid = (start + end) / 2;
                    if (matrix[i][mid] == target)
                        return true;
                    else if (matrix[i][mid] < target)
                        start = mid + 1;
                    else
                        end = mid - 1;
                }
                return false;
            } else if (matrix[i][0] < target) {
                outerStart = i + 1;
            } else
                outerEnd = i - 1;
        }

        return false;
    }
};
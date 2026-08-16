class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        vector<int> result;

        int top = 0, bottom = row - 1, left = 0, right = col - 1;
        // cout<<top<<" "<<bottom<<" "<<left<<" "<<right<<" ";

        while (top <= bottom && left <= right) {

            for (int i = left; i <= right; i++) {
                result.push_back(matrix[top][i]);
            }
            top++;
            for (int i = top; i <= bottom; i++) {
                result.push_back(matrix[i][right]);
            }
            right--;
            if (bottom >= top) {
                for (int i = right; i >= left; i--) {
                    result.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
            if (right >= left) {
                for (int i = bottom; i >= top; i--) {
                    result.push_back(matrix[i][left]);
                }
                left++;
            }
        }

        return result;
    }
};
class Solution {
  public:
    vector<vector<int>> transpose(vector<vector<int>>& mat) {
        // code here
        int row=mat.size();
        int col=mat[0].size();
        
        // cout<<row<<" "<<col;
        
        for(int i=0;i<col;i++){
            for (int j=i+1;j<row;j++){
                swap(mat[i][j],mat[j][i]);
            }
        }
        
        
         
        return mat;
    }
};
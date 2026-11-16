class Solution {
	public:
	
	// 	int row[4] = {-1, 1, 0, 0};
	// 	int col[4] = {0, 0, -1, 1};
	// 	string dir = "UDLR";
	int row[4] = {1, 0, 0, -1};
	int col[4] = {0, -1, 1, 0};
	string dir = "DLRU";
	
	bool valid(int i, int j, int n) {
		return i >= 0 && j >= 0 && i<n && j<n;
	}
	void Total(int i, int j, int n, vector<vector<int>> & maze, vector<vector<bool>> & visited, string path, vector<string>&ans) {
		if (i == n - 1 && j == n - 1) {
			ans.push_back(path);
			return;
		}
		visited[i][j] = 1;
		
		for (int k = 0; k<4; k++) {
			if (valid(i + row[k], j + col[k], n) && maze[i + row[k]][j + col[k]] && !visited[i + row[k]][j + col[k]]) {
				path.push_back(dir[k]);
				
				Total(i + row[k], j + col[k], n, maze, visited, path, ans);
				
				path.pop_back();
			}
		}
		
		visited[i][j] = 0;
		
	}
	
	vector<string> ratInMaze(vector<vector<int>> & maze) {
		int n = maze.size();
		vector<string>ans;
		if (maze[0][0] == 0 || maze[n - 1][n - 1] == 0)
			return ans;
		
		vector<vector<bool>> visited(n, vector<bool>(n, 0));
		string path;
		// i, j,n,  maze, visited, path, ans
		Total(0, 0, n, maze, visited, path, ans);
		return ans;
		
	}
};

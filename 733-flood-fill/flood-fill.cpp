class Solution {
public:
    
    void dfs(vector<vector<int>>& image, int sr, int sc, int color, vector<vector<bool>>& visited) {
        int m = image.size();
        int n = image[0].size();
        vector<vector<int>> dirx = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

        if(sr < 0 || sr >= m || sc < 0 || sc >= n)
            return;
        
        visited[sr][sc] = true;
        for(auto d : dirx) {
            int nx = d[0] + sr;
            int ny = d[1] + sc;

            if(nx >= 0 && nx < m && ny >= 0 && ny < n && !visited[nx][ny] && image[nx][ny] == image[sr][sc])
                dfs(image, nx, ny, color, visited); 
        }
        image[sr][sc] = color;
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int m = image.size();
        int n = image[0].size();

        vector<vector<bool>> visited(m, vector<bool>(n, false));

        dfs(image, sr, sc, color, visited);
        return image;
    }
};
class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        int m = mat.size(), n = mat[0].size();
        vector<vector<int>> ans(m, vector<int>(n));

        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {

                int lr = i - k, ur = i + k;
                int r = lr;

                int sum = 0;

                while(lr <= r && r <= ur) {

                    int lc = j - k, uc = j + k;
                    int c = lc;
                    while(lc <= c && c <= uc) {
                        if(r >= 0 & r < m && c >= 0 && c < n)
                            sum += mat[r][c];
                            c++;
                    }
                    r++;
                }
                ans[i][j] = sum;
            }
        }

        return ans;
    }
};
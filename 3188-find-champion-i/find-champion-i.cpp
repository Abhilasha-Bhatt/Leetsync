class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
        int n = grid.size();
        unordered_map<int, int> freq(n);
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                if(i != j){
                    if(grid[i][j] == 1)
                        freq[i]++;
                    else
                        freq[j]++;
                }
            }
        }

        int ans = -1;
        int maxfreq = 0;
        for(int i=0; i<n; i++) {
            if(maxfreq < freq[i]) {
                maxfreq = freq[i];
                ans = i;
            }
        }
        return ans;
    }
};
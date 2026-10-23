class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size(), ans = 0;

        for(int left=0; left<n; left++) {
            int currSum = 0;
            for(int right=left; right<n; right++) {
                currSum += arr[right];
                ans += (right - left + 1) % 2 == 1 ? currSum : 0;
            }
        }
        return ans;
    }
};
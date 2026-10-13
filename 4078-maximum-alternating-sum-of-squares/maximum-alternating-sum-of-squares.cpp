class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++) {
            nums[i] = abs(nums[i]);
            //cout << nums[i] << " ";
        }

        sort(nums.rbegin(), nums.rend());

        long long ans = 0;
        int n = nums.size();
        for(int i=0; i<nums.size()/2; i++) {
            ans = ans + ((nums[i] * nums[i]) - (nums[n-i-1] * nums[n-i-1]));
            //cout << ans << " ";
        }
        if(n%2 != 0)
            ans += (nums[n/2] * nums[n/2]);
        return ans;
    }
};
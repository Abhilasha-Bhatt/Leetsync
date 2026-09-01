class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int idx = 0;
        int prev = 0;
        while(idx < nums.size() && nums[idx] <= 0){
            idx++;
            prev = idx;
        }
        if(idx >= nums.size() || nums[idx] != 1)
            return 1;
        
        for(int i = idx; i<nums.size(); i++){
            while(i+1 < nums.size() && nums[i] == nums[i+1]){
                i++;
            }
            if(prev != i && nums[prev] != nums[i] && nums[prev] + 1 != nums[i])
                return nums[prev] + 1;
            prev = i;
        }
        return nums[prev] + 1;
    }
};
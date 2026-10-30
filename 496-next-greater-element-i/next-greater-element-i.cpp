class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        vector<int> ans(n, -1);

        unordered_map<int, int> idx;
        for(int i=0; i<nums2.size(); i++) {
            idx[nums2[i]] = i;
        }

        for(int i=0; i<n; i++) {
            int j = idx[nums1[i]] + 1;
            for(;j<nums2.size(); j++) {
                if(nums1[i] < nums2[j]) {
                    ans[i] = nums2[j];
                    break;
                }
            }
        }
        return ans;
    }
};
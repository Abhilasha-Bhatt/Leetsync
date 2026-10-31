class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int> st;
        int len = nums.size();
        vector<int> ans(len, -1);

        for(int i=len-1; i>=0; i--) {
            st.push(nums[i]);
        }
        for(int i=len-1; i>=0; i--) {
            while(!st.empty() && st.top() <= nums[i]) {
                st.pop();
            }
            if(!st.empty())
                ans[i] = st.top();
            
            // if(i == len-1 && !st.empty()) {
            //     while(!st.empty())
            //         st.pop();
            // }
            st.push(nums[i]);
        }
        return ans;
    }
};
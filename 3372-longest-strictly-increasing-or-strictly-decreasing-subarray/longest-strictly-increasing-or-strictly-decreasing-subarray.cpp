class Solution {
public:
    int longestMonotonicSubarray(vector<int>& arr) {
        int lo = 0, hi = 0;
        int len = arr.size();

        int ans = 0;
        while(hi < len-1) {
            if(arr[hi] < arr[hi+1])
                hi++;
            else {
                ans = max(ans, hi-lo+1);
                hi++;
                lo = hi;
            }
        }
        ans = max(ans, hi-lo+1);
        
        lo = hi = 0;
        while(hi < len-1) {
            if(arr[hi] > arr[hi+1])
                hi++;
            else {
                ans = max(ans, hi-lo+1);
                hi++;
                lo = hi;
            }
        }
        ans = max(ans, hi-lo+1);
        return ans;
    }
};
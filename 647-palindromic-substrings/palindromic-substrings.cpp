class Solution {
public:
    int countSubstrings(string s) {
        int len = s.size();
        int count = 0;
        for(int i=0; i<len; i++) {
            for(int j=i; j<len; j++) {
                string subs = s.substr(i, j-i+1);
                string subs1 = subs;
                reverse(subs1.begin(), subs1.end());
                if(subs == subs1)
                    count++;
            }
        }
        return count;
    }
};
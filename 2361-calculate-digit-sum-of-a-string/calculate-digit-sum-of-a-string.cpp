class Solution {
public:
    string digitSum(string s, int k) {
        
        while (s.size() > k) {
            int i = 0;
            int len = s.size();
            string ans = "";
            while (i < len) {
                int sum = 0;
                for (int j = i; j < i + k && j < len; j++) {
                    sum += s[j] - '0';
                }
                ans += to_string(sum);
                i += k;
            }

            s = ans;
        }
        return s;
    }
};
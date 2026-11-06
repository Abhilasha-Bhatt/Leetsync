class Solution {
public:
    string strWithout3a3b(int a, int b) {
        string s = "";

        while(a > 0 || b > 0) {
            bool writeA = false;
            int len = s.size();
            if(len >= 2 && s[len - 1] == s[len - 2]) {
                if(s[len - 1] == 'b')
                    writeA = true;
            }
            else {
                if(a >= b) {
                    writeA = true;
                }
            }

            if(writeA) {
                a--;
                s += 'a';
            }
            else {
                b--;
                s += 'b';
            }
        }
        return s;
    }
};
class Solution {
public:
    bool checkString(string s) {
        int i = 0;
        int len = s.size();
        while(i < len && s[i] == 'a')
            i++;
        
        while(i < len) {
            if(s[i] == 'a')
                return false;
            i++;
        }
        return true;
    }
};
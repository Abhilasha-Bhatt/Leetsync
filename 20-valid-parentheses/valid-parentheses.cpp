class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int n = s.size(), i = 0;

        while (i < n) {
            char ch = s[i];

            if (ch == '(' || ch == '{' || ch == '[')
                st.push(ch);

            else if (!st.empty() && ((st.top() == '(' && s[i] == ')') ||
                                     (st.top() == '[' && s[i] == ']') ||
                                     (st.top() == '{' && s[i] == '}'))) {
                st.pop();
            } else
                return false;
            i++;
        }
        return st.empty();
    }
};
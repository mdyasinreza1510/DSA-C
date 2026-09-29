//20
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (int i = 0; i < s.size(); i++) {
            char ch = s[i];

            // opening bracket
            if (ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            }
            else {
                // closing bracket but stack empty
                if (st.empty()) return false;

                // mismatch case
                if ((ch == ')' && st.top() != '(') ||
                    (ch == '}' && st.top() != '{') ||
                    (ch == ']' && st.top() != '[')) {
                    return false;
                }

                // match → pop
                st.pop();
            }
        }

        return st.empty();
    }
};
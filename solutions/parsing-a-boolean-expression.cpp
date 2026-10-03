// Solved with GitSolve AI
// Platform   : leetcode
// Problem    : Parsing A Boolean Expression
// URL        : https://leetcode.com/problems/parsing-a-boolean-expression/
// Difficulty : Hard
// Language   : cpp
// Saved at   : 2026-10-03T01:44:32.635Z

class Solution {
public:
    bool parseBoolExpr(string s) {

        stack<char> st;

        auto perform = [&](char op, string res) -> char {

            if (op == '!') {
                return res[0] == 't' ? 'f' : 't';
            }

            if (op == '&') {
                for (char c : res) {
                    if (c == 'f')
                        return 'f';
                }
                return 't';
            }

            for (char c : res) {
                if (c == 't')
                    return 't';
            }

            return 'f';
        };

        for (char c : s) {

            if (c == ',')
                continue;

            if (c != ')') {
                st.push(c);
            }
            else {

                string temp = "";

                while (!st.empty() && st.top() != '(') {
                    temp += st.top();
                    st.pop();
                }

                st.pop();

                char op = st.top();
                st.pop();

                char x = perform(op, temp);

                st.push(x);
            }
        }

        return st.top() == 't';
    }
};
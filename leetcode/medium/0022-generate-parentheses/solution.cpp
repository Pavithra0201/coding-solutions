class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string s;

        backtrack(n, 0, 0, s, ans);

        return ans;
    }

    void backtrack(int n, int open, int close,
                   string &s, vector<string> &ans) {

        // Complete valid combination
        if (s.length() == 2 * n) {
            ans.push_back(s);
            return;
        }

        // Add '('
        if (open < n) {
            s.push_back('(');
            backtrack(n, open + 1, close, s, ans);
            s.pop_back();
        }

        // Add ')'
        if (close < open) {
            s.push_back(')');
            backtrack(n, open, close + 1, s, ans);
            s.pop_back();
        }
    }
};
   
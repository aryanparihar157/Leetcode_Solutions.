class Solution {
public:
    string makeString(string str) {
        string res = "";

        for (char ch : str) {
            if (ch == '#') {
                if (!res.empty()) {
                    res.pop_back();
                }
            } else {
                res.push_back(ch);
            }
        }

        return res;
    }

    bool backspaceCompare(string s, string t) {
        return makeString(s) == makeString(t);
    }
};
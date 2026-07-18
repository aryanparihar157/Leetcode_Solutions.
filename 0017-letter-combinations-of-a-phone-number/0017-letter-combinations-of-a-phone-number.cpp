class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};
        unordered_map<char, string> map = {
            {'2', "abc"}, {'3', "def"}, {'4', "ghi"}, {'5', "jkl"},
            {'6', "mno"}, {'7', "pqrs"}, {'8', "tuv"}, {'9', "wxyz"}
        };
        vector<string> ans = {""};
        for (char d : digits) {
            vector<string> temp;
            string letters = map[d];
            for (const string &cur : ans) {
                for (char ch : letters) {
                    temp.push_back(cur + ch);
                }
            }
            ans.swap(temp);
        }
        return ans;
    }
};
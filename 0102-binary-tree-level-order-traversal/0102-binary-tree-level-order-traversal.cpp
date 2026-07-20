/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void helper(TreeNode* node, int depth, vector<vector<int>>& levels) {
        if (node == nullptr) return;

        if (levels.size() == depth) {
            levels.push_back(vector<int>());
        }

        levels[depth].push_back(node->val);

        helper(node->left, depth + 1, levels);
        helper(node->right, depth + 1, levels);
    }

    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> levels;
        helper(root, 0, levels);
        return levels;
    }
};
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
    bool same;
    void helper(TreeNode* p, TreeNode* q) {
        if (!p && !q) return;
        if (!p || !q || p->val != q->val) {
            same = false;
            return;
        }
        helper(p->left, q->left);
        if (!same) return;
        helper(p->right, q->right);
    }
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        same = true;
        helper(p, q);
        return same;
    }
};
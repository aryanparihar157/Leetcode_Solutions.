class Solution {
public:
    void helper(TreeNode* node, int curr, int targetSum, bool &found) {
        if (!node || found) return;
        curr += node->val;
        if (!node->left && !node->right) {
            if (curr == targetSum) found = true;
            return;
        }
        helper(node->left, curr, targetSum, found);
        helper(node->right, curr, targetSum, found);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        bool found = false;
        helper(root, 0, targetSum, found);
        return found;
    }
};
class Solution {
public:
    int ans = 0;

    int height(TreeNode* node) {
        if (!node) return 0;
        int left = height(node->left);
        int right = height(node->right);
        ans = max(ans, left + right);
        return 1 + max(left, right);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        height(root);
        return ans;
    }
};
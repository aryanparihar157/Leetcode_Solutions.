class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        return isMirror(root->left, root->right);
    }
    bool isMirror(TreeNode* l, TreeNode* r) {
        if (!l && !r) return true;
        if (!l || !r) return false;
        return l->val == r->val && isMirror(l->left, r->right) && isMirror(l->right, r->left);
    }
};
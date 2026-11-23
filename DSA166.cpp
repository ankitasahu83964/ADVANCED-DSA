class Solution {
public:
    bool check(TreeNode* a, TreeNode* b) {
        if(a == NULL && b == NULL)
            return true;

        if(a == NULL || b == NULL)
            return false;

        return (a->val == b->val) &&
               check(a->left, b->right) &&
               check(a->right, b->left);
    }

    bool isSymmetric(TreeNode* root) {
        return check(root->left, root->right);
    }
};

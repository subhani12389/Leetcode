class Solution {
public:
    bool check(TreeNode* l, TreeNode* r) {
        if (l == nullptr && r == nullptr)
            return true;

        if (l == nullptr || r == nullptr)
            return false;

        if ((l->val == r->val) && 
            check(l->left, r->right) && 
            check(l->right, r->left)) {
            return true;
        }

        return false;
    }

    bool isSymmetric(TreeNode* root) {
        if (root == nullptr) return true;
        return check(root->left, root->right);
    }
};

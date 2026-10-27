
class Solution {
public:
    bool isSame(TreeNode* a, TreeNode* b) {
        if (a == NULL && b == NULL) return true;
        if (a == NULL || b == NULL) return false;

        if (a->val != b->val) return false;

        return isSame(a->left, b->left) &&
               isSame(a->right, b->right);
    }

    bool isSubtree(TreeNode* root, TreeNode* sr) {
        if (sr == NULL) return true;
        if (root == NULL) return false;

        if (isSame(root, sr)) return true;

        return isSubtree(root->left, sr) ||
        isSubtree(root->right, sr);
    }
};

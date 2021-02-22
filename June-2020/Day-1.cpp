/* Invert a binary tree.*/

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root == NULL)
            return NULL;
        TreeNode *temp = NULL;
    
        temp = root -> left;
        root -> left = root -> right;
        root -> right = temp;
            
        if(root -> left != NULL)
            invertTree(root->left);
        if(root -> right != NULL)
            invertTree(root -> right);
        return root;
    }
};

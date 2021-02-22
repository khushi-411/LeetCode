/* Given the root of a complete binary tree, return the number of the nodes in the tree. */

class Solution {
public:
    int countNodes(TreeNode* root) {
        if(root == NULL)
            return 0;
        return countNodes(root->left)+ countNodes(root->right) +1;
    }
};

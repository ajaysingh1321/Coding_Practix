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
    int maxDepth(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }

        int left = maxDepth(root->left);
        int right = maxDepth(root->right);

        // If any subtree is unbalanced or there's a height difference of more than 1, return -1 to indicate unbalanced.
        if (left == -1 || right == -1 || abs(left - right) > 1) {
            return -1;
        }

        // Return the maximum depth of the current node's subtrees + 1.
        return max(left, right) + 1;
    }

    bool isBalanced(TreeNode* root) {
        return maxDepth(root) != -1; // If maxDepth returns -1, the tree is unbalanced.
    }
};

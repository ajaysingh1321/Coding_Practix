/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
/*
    bool findNode(TreeNode* root, int target, vector<int>& path) {
        if (root == nullptr)
            return false;

        path.push_back(root->val);

        if (root->val == target)
            return true;

        if (findNode(root->left, target, path) || findNode(root->right, target, path))
            return true;

        path.pop_back();
        return false;
    }
*/
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

     if(root==NULL || root==p|| root==q){
         return root;
     }

     TreeNode* left = lowestCommonAncestor(root->left,p,q);
     TreeNode* right = lowestCommonAncestor(root->right,p,q);

     if(left==NULL){
         return right;
     }else if(right==NULL){
         return left;
     }else{
         return root;
     }



        /*
        vector<int> pathP;
        vector<int> pathQ;
        
        // Find the paths from the root to nodes p and q
        if (!findNode(root, p->val, pathP) || !findNode(root, q->val, pathQ)) {
            return nullptr; // One or both nodes not found in the tree
        }

        int i = 0;
        while (i < pathP.size() && i < pathQ.size() && pathP[i] == pathQ[i]) {
            i++;
        }

        // The lowest common ancestor is the node at index i-1 in pathP or pathQ
        if (i > 0 && i <= pathQ.size()) {
            int lcaValue = pathQ[i - 1];
            TreeNode* lca = new TreeNode(lcaValue);
            return lca;
        }
        
        return nullptr;
        */
    }
};

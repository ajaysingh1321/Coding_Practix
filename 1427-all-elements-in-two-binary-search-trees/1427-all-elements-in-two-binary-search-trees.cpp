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
    void InOrder(TreeNode* root,vector<int>&ans){
        if(root==NULL) return;

       if(root->left) InOrder(root->left,ans);
        ans.push_back(root->val);
        if(root->right) InOrder(root->right,ans);

        return;
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int>ans;
        

        InOrder(root1,ans);
        InOrder(root2,ans);

        sort(ans.begin(),ans.end());

        return ans;

    }
};
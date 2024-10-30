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
     void fun(TreeNode* root, vector<int> &vtr)
    {
        if(root==NULL) return;
        if(root->left == NULL && root->right==NULL)
        {
            vtr.push_back(root->val);
        }
        fun(root->left, vtr);
        fun(root->right, vtr);
        return;
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> v1;
        fun(root1, v1);
        vector<int> v2;
        fun(root2, v2);
        if(v1==v2)
            return true;
        else
            return false;  
    }
};
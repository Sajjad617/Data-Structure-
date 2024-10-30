/************************************************************

    Following is the TreeNode class structure:

    template <typename T>

    class TreeNode {
    public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;
        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
#include <bits/stdc++.h>
vector<int> reverseLevelOrder(TreeNode<int> *root){
    // Write your code here.
    queue<TreeNode<int>*> q;
    // stack<TreeNode<int>*> tk;
    vector<int> v;
    if(root==NULL) return v;
    q.push(root);
    while(!q.empty())
    {
        TreeNode<int> * node = q.front();
        // tk.push(q.front());
        v.push_back(node->val);
        q.pop();

        if(node->left) 
            q.push(node->left);
        if(node->right) 
            q.push(node->right);
    }

    reverse(v.begin(), v.end());
    // while(!tk.empty())
    // {
    //     TreeNode<int>* f = tk.top();
    //     v.push_back(f->val);
    //     tk.pop();
    // }

    return v;
}










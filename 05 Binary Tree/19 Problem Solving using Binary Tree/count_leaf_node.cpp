int nodeLevel(TreeNode<int>* root, int searchedValue)
{
    bool frq[3005] = {false};
    queue<pair<TreeNode<int>* int>> q;
    vector<int> v;
    q.push(root, 1);
    while(!q.empty())
    {
        pair<TreeNode<int>*, int>> pr = q.front();
        q.pop();
        TreeNode<int>* node = pr.first;
        int level = pr.second;

        if(frq[level] == false){
            v.push_back(node->val);
            frq[level] = true;
        }

        if(node->left)
            q.push({node->left, level+1});
        if(node->right)
            q.push({node->right, level+1});
    }
    
}
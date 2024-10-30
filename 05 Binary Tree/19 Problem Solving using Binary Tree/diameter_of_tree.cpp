/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
int mx = 0;
int diameter_0f_tree(TreeNode<int>* root)
{
    if(root==NULL) return 0;
    int l = diameter_0f_tree(root->left);
    int r = diameter_0f_tree(root->right);
    int d = l + r;
    mx = max(mx, d);
    return max(l, r)+1;
}

int diameterOfBinaryTree(TreeNode<int> *root){
	// Write Your Code Here.
    mx =0;
    int x = diameter_0f_tree(root);
    return mx;
}

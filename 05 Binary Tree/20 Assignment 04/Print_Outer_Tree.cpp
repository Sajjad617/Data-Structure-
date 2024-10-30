#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        // 1. ber kore ano
        Node *p = q.front();
        q.pop();

        // 2. jabotiyo ja kaj ache
        int l, r;
        cin >> l >> r;
        Node *myLeft;
        Node *myRight;
        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);
        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        // 3. children gulo ke push koro
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}

list<int> l;
void left_root(Node* root)
{
    if(root == NULL) return;

    if(root->left){
        left_root(root->left);
    }
    else{
        left_root(root->right);
    }
    l.push_back(root->val);
    return;
}

list<int> l2;
void right_root(Node* root)
{
    if(root==NULL) return;

    l2.push_back(root->val);

    if(root->right){
        right_root(root->right);
    }
    else{
        right_root(root->left);
    }
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Node *root = input_tree();
    if(root->left ==NULL && root->right == NULL){
        cout << root->val << endl;
    }
    else if(root->left !=NULL && root->right != NULL){
        left_root(root);
        l.pop_back();
        right_root(root);
        for(int z : l){
            cout << z << " ";
        }

        for(int z : l2){
            cout << z << " ";
        }

    }
    else if(root->left){
        left_root(root);

        for(int z : l){
            cout << z << " ";
        }
    }
    else if(root->right){
        right_root(root);

        for(int z : l2){
            cout << z << " ";
        }
    }
    
    
    
    return 0;
}
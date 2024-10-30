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
    if(val == -1) root = NULL;
    else root = new Node(val);
    queue<Node*> q;
    if(root) q.push(root);
    while(!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node* myleft;
        Node* myright;
        if(l == -1)
            myleft = NULL;
        else 
            myleft = new Node(l);
        if(r == -1)
            myright = NULL;
        else 
            myright = new Node(r);

        p->left = myleft;
        p->right = myright;

        if(p->left)
            q.push(p->left);
        if(p->right)
            q.push(p->right);
    }
    return root;
}
void level_Order(Node *root)
{
    if (root == NULL)
    {
        cout << "Tree nai" << endl;
        return;
    }
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        // 1. ber kore ana
        Node *f = q.front();
        q.pop();

        // 2. jabotiyo ja kaj ache
        cout << f->val << " ";

        // 3. tar children gulo ke rakha
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }

}
int count(Node *root)
{
    if(root == 0) return 0;
    int l = count(root->left);
    int r = count(root->right);

    return l + r + 1;
}

int main()
{
    Node *root = input_tree();
    cout << count(root) << endl;
    return 0;
} 
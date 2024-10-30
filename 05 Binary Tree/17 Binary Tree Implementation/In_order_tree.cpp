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
void InOrder(Node *root)
{
    if(root==NULL) return;
    
    InOrder(root->left);
    cout << root->val << " ";
    InOrder(root->right);
}
int main()
{
    Node *root = new Node(5);
    Node *a = new Node(3);
    Node *b = new Node(6);
    Node *c = new Node(2);
    Node *d = new Node(8);
    Node *e = new Node(1);
    Node *f = new Node(7);
    Node *g = new Node(9);
    Node *h = new Node(4);
    // Node *i = new Node(7);

    // connection
    root->left = a;
    root->right = b;
    a->left = c;
    a->right = h;
    c->left = e;
    b->right = d;
    d->left = f;
    d->right = g;
    // d->left = i;
    // h->right = i;

    InOrder(root);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

void check_l(Node *head1, Node *head2)
{
    if(head1->val != head2->val){
        cout << "NO"<< endl;
        return;
    }
    else if(head1->next == NULL && head2->next != NULL){
        cout << "NO" << endl;
        return;
    }
    else if(head1->next != NULL && head2->next == NULL){
        cout << "NO" << endl;
        return;
    }
    else if(head1->next == NULL && head2->next == NULL){
        cout << "YES" << endl;
        return;
    }
    check_l(head1->next, head2->next);
}

// int size(Node *head, int v)
// {
//     v++;
//     if(head->next == NULL) return v;
//     size(head->next, v);
// }

int main()
{
    Node *head_1 = NULL; 
    Node *head_2 = NULL; 
    Node *tail = NULL; 

    int val;

    while(true)
    {
        cin >> val;
        if(val == -1) break;
        insert_at_tail(head_1, tail, val);
    }

    while(true)
    {
        cin >> val;
        if(val == -1) break;
        insert_at_tail(head_2, tail, val);
    }

    // int v=0;
    // int v1=0;
    // int s1 = size(head_1, v);
    // int s2 = size(head_2, v1);
    // cout << s1 << " " << s2;
    check_l(head_1, head_2);

    // if(s1 == s2){
    //     // check_l(head_1, head_2);
    //     // if(c==1) cout << "YES" << endl;
    //     // else cout << "NO" << endl;

    // }
    // else{
    //     cout << "NO" << endl;
    // }
    
    return 0;
}
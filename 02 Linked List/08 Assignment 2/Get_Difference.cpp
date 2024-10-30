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

void min_max(Node *head)
{
    int mn = INT_MAX;
    int mx = INT_MIN;

    Node *temp = head;
    while(temp != NULL){
        if(temp->val > mx){
            mx = temp->val;
        }
        temp = temp->next;
    }

    Node *tmp = head;
    while(tmp != NULL){
        if(tmp->val < mn){
            mn = tmp->val;
        }
        tmp = tmp->next;
    }

    cout << mx-mn << endl;
}

int main()
{
    Node *head = NULL; 
    Node *tail = NULL; 

    int val;

    while(true)
    {
        cin >> val;
        if(val == -1) break;
        insert_at_tail(head, tail, val);
    }

    min_max(head);
    
    return 0;
}
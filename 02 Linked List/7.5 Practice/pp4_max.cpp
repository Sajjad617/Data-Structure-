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
void insert(Node *&head, Node *&tail, int val)
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
void max(Node *head)
{
    Node *temp = head;
    int mx = INT_MIN;
    while(temp != NULL){
        if(temp->val > mx){
            mx = temp->val;
        }
        temp = temp->next;
    }

    cout << mx << endl;
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
        insert(head, tail, val);
    }
    max(head);
    
    return 0;
}
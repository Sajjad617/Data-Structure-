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

void print_ll(Node *head)
{
    Node *temp = head;
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
}
 
void remove_element(Node *&head, int v)
{
    
    Node *temp = head;
    while (temp->next !=NULL)
    {
        if(temp->next->val == v){
            Node *delnode = temp->next;
            temp->next = temp->next->next;
            delete delnode;             
        }
        else{
            temp = temp->next;
        }
    }
    if(head->val == v){
        Node *deleNode = head;
        head = head->next;
        delete deleNode;
    }
}
int main()
{
    Node *head = NULL; 
    Node *tail = NULL; 



    while(true)
    {
        int v;
        cin >> v;
        if(v == -1) break;
        insert_at_tail(head, tail, v);
    }
    int val;
    cin >> val;
    remove_element(head, val);
    print_ll(head);
    
    return 0;
}
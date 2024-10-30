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
void print_ll(Node *&head, int s)
{
    Node *temp = head;
    // int s = size(temp);
    if(s%2 == 0){
        for(int i=1; i<s/2; i++){
            temp = temp->next;
        }
        cout << temp->val << " " << temp->next->val << endl;
    }
    else{
        for(int i=1; i<=s/2; i++){
            temp = temp->next;
        }
        cout << temp->val << endl;

    }
    
}
int size(Node *head)
{
    Node *temp = head;
    int count =0;
    while(temp !=NULL){
        count++;
        temp = temp->next;
    }
    return count;
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
    int s = size(head);
    print_ll(head, s);
    
    return 0;
}
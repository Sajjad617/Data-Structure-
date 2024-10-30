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

void insert_at_head(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        return;
    }
    else{

        newNode->next = head;
        head = newNode;
    }
    
}

void insert_at_tail(Node *&head, int val)
{
    Node *newNode = new Node(val);
    Node *temp = head;
    if(head == NULL){
        head = newNode;
        return;
    }
    while(temp->next != NULL){
        
        temp = temp->next;
        if(temp == NULL) return;
    }
    if(temp == NULL) return;

    temp->next = newNode;
    temp = newNode;

}

void delete_head(Node *&head)
{
    if(head == NULL) {
        // cout << " " << endl;
        return;
    }
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
}

void delete_any_position(Node *head, int pos)
{
    Node *temp = head;
    if (temp == NULL) return;
    for(int i=1; i<pos; i++){
        if(temp->next == NULL){
            return;
        }
        temp = temp->next;
    }
    if(temp->next == NULL){
            return;
        }
    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
    
}

void print_ll(Node *head)
{
    Node *temp = head;
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL; 
    // Node *tail = NULL; 

    int t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        int n;
        int val;
        cin >> n >> val;

        if(n == 0){
            insert_at_head(head, val);
            print_ll(head);
        }
        else if(n == 1){
            insert_at_tail(head, val);
            print_ll(head);
        }
        else if(n == 2){
            if(val == 0){
                delete_head(head);
                print_ll(head);  
            }
            else{
                delete_any_position(head, val);
                print_ll(head);
            }
        }
        // cout << "t= " << i << endl << endl;
    }
    
    
    return 0;
}
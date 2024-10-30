#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* next;
        Node* prev;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
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
    newNode->prev = tail; 
    tail = newNode;
}

void print_ll(Node *head)
{
    cout << "L -> ";
    Node *temp = head;
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
void pre_print_ll(Node *tail)
{
    cout << "R -> ";
    Node *temp = tail;
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}
void insert_head(Node *&head, Node *&tail, int v){
    Node *nNode = new Node(v);
    if(head == NULL){
        head = nNode;
        tail = nNode;
        return;
    }
    nNode->next = head;
    head->prev = nNode;
    head = nNode;
}
void insert_at_pos(Node *head, int po, int v){
    
    Node *nNode = new Node(v);
    Node *temp = head;

    for(int i=1; i<po; i++){
        temp = temp->next;
    }
    nNode->next = temp->next;
    temp->next->prev = nNode;
    temp->next = nNode;
    nNode->prev = temp;
}

int size(Node *head){
    Node *temp = head;
    int cnt = 0;
    while(temp != NULL){
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

int main()
{
    Node *head = NULL; 
    Node *tail = NULL; 

    int n;
    cin >> n;
    while(n--)
    {
        int val, po;
        cin >> po >> val;
        // int sz = size(head);
        // cout << sz << "*";
        if(po == 0){
            insert_head(head, tail, val);
            print_ll(head);
            pre_print_ll(tail);
        }
        else if(size(head) == po){
            insert_at_tail(head, tail, val);
            print_ll(head);
            pre_print_ll(tail);
        }
        else if(size(head) < po){
                cout << "Invalid" << endl;
        }
        else{
            
            if(head == NULL){
                cout << "Invalid" << endl;
            }
            else{
                insert_at_pos(head, po, val);
                print_ll(head);
                pre_print_ll(tail);
            }
    

        }

    }
    
    return 0;
}
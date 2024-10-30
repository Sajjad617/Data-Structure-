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

void check(Node *head)
{
    Node *temp1 = head;
    // for(Node *i = head; i!=NULL; i=i->next){
        
    //             // cout << i->val << " " << j->next->val << endl; 

    //     }
    // }

    while(temp1 != NULL){
        Node *temp2 = temp1;
        while (temp2->next != NULL)
        {
            if(temp1->val == temp2->next->val){

                Node *deleteNode = temp2->next;
                temp2->next = temp2->next->next;
                delete deleteNode;
            }
            else {
                temp2 = temp2->next;
            }
            // cout << temp1->val << " " << temp2->val << endl; 
        }
        temp1 = temp1->next;
        
    }
}

void print_ll(Node *head)
{
    Node *temp= head;
    while(temp != NULL){
    cout << temp->val << " ";
    temp = temp->next;
    }
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

    check(head);
    print_ll(head);
    // cout << "ggg";
    
    return 0;
}
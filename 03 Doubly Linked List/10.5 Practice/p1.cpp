#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* next;
        Node *prev;
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
    tail = tail->next;



    // tail = newNode;
}

void prin_dll(Node *head, Node *head2)
{
    Node *temp = head;
    Node *temp2 = head2;

    int flag = 0;
    // cout << temp->val  << " " << temp2->val << endl;


    while (temp != NULL)
    {
        if(temp->val != temp2->val) {
            flag++;
            // cout << "flag= " << flag<< endl;
            break;
        }
        // cout << temp->val << temp2->val << endl;
        temp = temp->next;
        temp2 = temp2->next;
    }

    if(flag){
        cout << "NO";
    }
    else{
        cout << "YES";
    }
    // cout << endl;

}

int size(Node *head)
{
    Node *temp= head;
    int cnt=0;
    while( temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

int main()
{
    Node *head = NULL;
    Node *head2 = NULL;
    Node *tail = NULL; 

    int val;

    while(true)
    {
        cin >> val;
        if(val == -1) break;
        insert_at_tail(head, tail, val);
    }
    while(true)
    {
        cin >> val;
        if(val == -1) break;
        insert_at_tail(head2, tail, val);
    }
    int h1 = size(head); 
    int h2 = size(head2); 
    // cout << h1 << h2;
    if(h1==h2){
        prin_dll(head, head2);
        // prin_dll(head2);
    }
    else{
        cout << "NO";
    }

    
    return 0;
}
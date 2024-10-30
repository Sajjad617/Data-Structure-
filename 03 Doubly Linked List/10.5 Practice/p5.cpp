#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insert_at_tail(Node *&head,Node *&tail, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;

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
void print_d_linked_list(Node *head, Node *tail)
{
    // cout << endl;
    // cout << "Your Normal Dll : ";
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
 
}
void sorted_dl(Node *head)
{
    // cout << endl;
    // cout << "Your Normal Dll : ";
    Node *temp = head;
    for(Node *i=temp; i->next!= NULL; i = i->next){
        for(Node *j=i->next; j != NULL; j=j->next){
            if(i->val > j->val){
                swap(i->val, j->val);
            }
        }
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
    sorted_dl(head);
    print_d_linked_list(head, tail);
    // sort(head)
    
    
    return 0;
}
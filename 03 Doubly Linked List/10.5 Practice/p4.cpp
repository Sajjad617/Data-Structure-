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

void insert_at_head(Node *&head, Node *&tail, int v)
{
    Node *newNode = new Node(v);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;

    // cout << endl << "Insert at head" << endl;

}

void insert_at_tail(Node *&head,Node *&tail, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}


void insert_at_position(Node *head, int pos, int v)
{
    Node *newNode = new Node(v);
    Node *temp = head;
    for(int i=1; i<=pos-1; i++)
    {
        temp = temp->next;
        if (temp == NULL)
        {

            return;
        }
    }

    newNode->next = temp->next;
    temp->next->prev = newNode;
    temp->next = newNode;
    newNode->prev = temp;

    // cout << endl << "Insert at position:  " << pos << endl << endl;
}
void print_d_linked_list(Node *head, Node *tail)
{
    cout << endl;
    // cout << "Your Normal Dll : ";
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    // cout << endl;
    cout << endl;
    // cout << "Your Reverse Dll: ";
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    // cout << endl;
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
    Node *tail = NULL; 

    int n;
    cin >> n;
    while(n--)
    {
        int pos, v;
        cin >> pos >> v;
        if(pos == 0){
                insert_at_head(head, tail, v);
                print_d_linked_list(head, tail);
            }
            else{
                if(pos > size(head)){
                    cout << endl << "Invalid";
                }
                else if(pos == size(head)){
                    insert_at_tail(head, tail , v);
                    print_d_linked_list(head, tail);
                }
                else{
                    insert_at_position(head, pos, v);
                    print_d_linked_list(head, tail);
                }

            } 

        // insert_at_position(head, p, v);
        // print_d_linked_list(head, tail);

    }
    
    
    return 0;
}
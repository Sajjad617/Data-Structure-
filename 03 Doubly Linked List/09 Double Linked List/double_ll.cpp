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
        cout << endl
             << "Inserted at head" << endl
             << endl;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
    cout << endl
         << "Inserted at tail" << endl
         << endl;
}

void del_tail(Node *&head, Node *&tail)
{
    if(head == NULL){
        cout << endl << "Tail NULL" << endl;
        return;
    } 
    Node *delNode = tail;
    tail = tail->prev;
    delete delNode;
    if(tail == NULL)
    {
        head = NULL;
        cout << "Tail Deleted Now Head is NULL" << endl;
        return;
    }
    tail->next = NULL;
    cout << endl << "Tail Deleted" << endl;
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
            cout << endl
                 << "Invalid Index" << endl
                 << endl;
            return;
        }
    }

    newNode->next = temp->next;
    temp->next->prev = newNode;
    temp->next = newNode;
    newNode->prev = temp;

    cout << endl << "Insert at position:  " << pos << endl << endl;

}
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

    cout << endl << "Insert at head" << endl;

}
void delete_from_position(Node *head, int pos)
{
    Node *temp = head;
    for(int i=1; i<=pos-1; i++){
        temp = temp->next;
        if (temp == NULL)
        {
            cout << endl
                 << "Invalid Index" << endl
                 << endl;
            return;
        }
    }
    Node * deleteNode = temp->next;
    temp->next = temp->next->next;
    temp->next->prev = temp;
    delete deleteNode;
    cout << endl
         << "Deleted position " << pos << endl
         << endl;
}
void delete_head(Node *&head, Node*&tail)
{
    if(head==NULL){
        cout << "Head is Empty" << endl;
        return;
    } 
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
    if(head == NULL){
        tail = NULL;
        return;
    }
    head->prev = NULL;
    cout << endl << "Deleted head" << endl << endl;
}
void print_d_linked_list(Node *head, Node *tail)
{
    cout << endl;
    cout << "Your Normal Dll : ";
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
    cout << endl;
    cout << "Your Reverse Dll: ";
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
    cout << endl;
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
    while (true)
    {
        cout << "OPtion 1: Insert at Tail" << endl;
        cout << "Option 2: Print Linked List" << endl;
        cout << "Option 3: Insert at any position" << endl;
        cout << "Option 4: Insert at head" << endl;
        cout << "Option 5: Deleted from position" << endl;
        cout << "Option 6: Deleted head" << endl;
        cout << "Option 7: Deleted tail" << endl;
        cout << "OPtion 8: Terminate" << endl;

        int op;
        cin >> op;

        if (op == 1)
        {
            cout << "Enter a Value: ";
            int v;
            cin >> v;

            insert_at_tail(head, tail, v);
        }
        else if (op == 2)
        {
            print_d_linked_list(head, tail);
        }
        else if(op == 3)
        {
            int pos, v;
            cout << "Enter position: ";
            cin >> pos;
            cout << endl <<  "Enter Value: ";
            cin >> v; 
            
            if(pos == 0){
                insert_at_head(head, tail, v);
            }
            else{
                if(pos > size(head)){
                    cout << endl << "Invalid position" << endl;
                }
                else if(pos == size(head)){
                    insert_at_tail(head, tail , v);
                }
                else{
                    insert_at_position(head, pos, v);
                }

            }  
        }
        else if (op == 4)
        {
            cout << "Enter Value: ";
            int v;
            cin >> v;
            insert_at_head(head, tail, v);
        }
        else if(op == 5)
        {
            cout << endl << "Enter position for delete: ";

            int pos;
            cin >> pos;
            if(pos == 0)
            {
                delete_head(head, tail);
            }
            else if(pos > size(head))
            {
                cout << endl << "Invalid position" << endl;
            }
            else if(pos == size(head))
            {
                del_tail(head, tail);
            }
            else
            {
                delete_from_position(head, pos);

            }
        }
        else if(op == 6)
        {
            delete_head(head, tail);
        }
        else if(op == 7)
        {
            del_tail(head, tail);
        }
        else if (op == 8)
        {
            break;
        }
    }
    return 0;
}

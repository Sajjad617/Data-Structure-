#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_at_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *temp = head;

    while (temp->next != NULL)// temp->next diye amra next 1A er gore link ache naki ta dekhbo (temp = 1A er data.. temp->next= next gorer link)
    { 
        temp = temp->next;
    }
    // temp ekhn last node e
    temp->next = newNode;
}

void print_linked_list(Node *head)
{
    cout << "Your Link List: ";
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << "";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    while (true)
    {
    cout << "OPtion 1: Insert at Tail" << endl;
    cout << "Option 2: Print Linked List" << endl;
    cout << "OPtion 3: Terminate" << endl;

    int op;
    cin >> op;

    if (op == 1)
    {
        cout << "Enter a Value: ";
        int v;
        cin >> v;

        insert_at_tail(head, v);
    }
    else if (op == 2)
    {
        print_linked_list(head);
    }
    else if (op == 3)
    {
        break;
    }

    }
    

    return 0;
}

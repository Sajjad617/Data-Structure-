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
    cout << endl;
    cout << "Your Link List: ";
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    int val;
    Node *head = NULL;
    while(true)
    {
        cin >> val;
        if(val == -1){
            break;
        }
        insert_at_tail(head, val);
    }
    print_linked_list(head);
    return 0;
}
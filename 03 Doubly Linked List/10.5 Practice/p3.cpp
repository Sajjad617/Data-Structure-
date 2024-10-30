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

        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;

}

void print_d_linked_list(Node *head, Node *tail)
{

    Node *temp = head;
    Node *tmp = tail;
    int flag = 0;
    while (temp != NULL)
    {
        // cout << temp->val << " ";
        if(temp->val != tmp->val){
            flag++;
        }
        tmp = tmp->prev;
        temp = temp->next;
    }
    if(flag) cout << "NO";
    else cout << "YES";
    // cout << endl;
    // Node *tmp = tail;
    // while (tmp != NULL)
    // {
    //     cout << tmp->val << " ";
    //     tmp = tmp->prev;
    // }
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

    print_d_linked_list(head, tail);
    
    return 0;
}
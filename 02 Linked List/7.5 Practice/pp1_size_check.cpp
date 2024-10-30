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
void insert(Node *&head, Node *&tail, int v)
{
    Node *newNode = new Node(v);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;

}
int size(Node *head)
{
    Node *temp = head;
    int count = 0;
    while(temp!= NULL){
        // cout << temp->val << " ";
        count++;
        temp = temp->next;
    }
    return count;
}
int main()
{
    Node * list_1 = NULL;
    Node * list_2 = NULL;
    Node * tail = NULL;
    int val;

    while(true)
    {
        cin >> val;
        if(val == -1) break;
        insert(list_1, tail, val);
    }

    while(true)
    {
        cin >> val;
        if(val == -1) break;
        insert(list_2, tail, val);
    }

    int list_1_size = size(list_1);
    int list_2_size = size(list_2);
    if(list_1_size == list_2_size){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}
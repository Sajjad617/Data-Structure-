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

// void find(Node *head, int f)
// {
//     Node *temp = head;
//     int count = 0;
//     int flag = 0;
//     while(temp != NULL){
//         count++;
//         if(temp->val == f){
//             flag++;
//             break;
//         }
//         temp = temp->next;
//     }
//     if(flag == 0){
//         cout << "-1" << endl;
//     }
//     else{
//         cout << count-1 << endl;

//     }
// }

void find_return(Node *head, int f, int c)
{
    // Node *temp = head;
    // int count = 0;
    // int flag = 0;
    c++;
    if(head->val == f){
        cout << c-1 << endl;
        return;
    }
    if(head->next == NULL){
        cout << "-1" << endl;
        return;
    }
    find_return(head->next, f, c);
    return;
}


int main()
{
    
    int n;
    cin >> n;
    for (int i=0; i<n; i++)
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
        int f;
        cin >> f;
        int c = 0;
        // int count = find_return(head, f, c);
        find_return(head, f, c);

        // cout << count << endl;
    }

    // cout << "fff";
    
    return 0;
}
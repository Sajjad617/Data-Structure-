#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        string val;
        Node* next;
        Node* prev;
    Node(string val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
void insert_at_tail(Node *&head, Node *&tail, string val)
{
    Node *newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail; 
    tail = newNode;
}

int main()
{
    Node *head = NULL; 
    Node *tail = NULL; 

    string val;

    while(true)
    {
        cin >> val;
        if(val == "end") break;
        insert_at_tail(head, tail, val);
    }
    int n;
    cin >> n;
    Node *temp = head;
    Node *temp1 = head;

    for(int i=0; i<n; i++){
        string s;
        cin >> s;
        if(s == "visit"){
            string ser;
            cin >> ser;
            int flag = 0;
            temp1 = head;

            while(temp1 != NULL){
                if(temp1->val == ser){
                    flag++;
                    break;
                }
                temp1 = temp1->next;
            }

            if(flag){
                temp = head;
                while(temp != NULL){
                    if(temp->val == ser){
                    break;
                    }
                
                    temp = temp->next;
                }

                cout << temp->val << endl;
            }
            else cout << "Not Available" << endl;

        }
        else if(s == "prev"){
            if(temp->prev == NULL){
                cout << "Not Available" << endl;
            }
            else{
                temp=temp->prev;
                cout << temp->val << endl;
            }
        }
        else if(s == "next"){
            if(temp->next == NULL){
                cout << "Not Available" << endl;
            }
            else{
                temp=temp->next;
                cout << temp->val << endl;
            }
            

        }
    }
    
    return 0;
}
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void insert_tail(ListNode *&list, ListNode *&tail, int v){
        ListNode *newNode = new ListNode(v);
        if(list==NULL){
            list = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = tail->next;
    }
    void print(ListNode *head){
        ListNode *temp = head;
        while(temp != NULL){
            cout << temp->val << " ";
            temp = temp->next;
        }

    }
    ListNode* mergeNodes(ListNode* head) {
        ListNode *list = NULL;
        ListNode *tail = NULL;
        ListNode *temp = head;
        // ListNode *sum = NULL;
        int sum = 0;
        while(temp->next != NULL){
            temp = temp->next;
            sum = sum + temp->val;
            if(temp->val == 0){
                insert_tail(list, tail, sum);
                sum = 0;
            }
        }
        print(list);
        head = list;
        return head;
    }
};
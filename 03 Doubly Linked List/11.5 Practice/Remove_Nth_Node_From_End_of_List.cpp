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
    int size(ListNode *head){
        ListNode *temp = head;
        int cnt = 0;
        while(temp != NULL){
            cnt++;
            temp = temp->next;
        }
        return cnt;
    } 
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == NULL) return head;
        else if(head->next == NULL){
            head = NULL;
            return head;
        }
        
        int sz = size(head);
        sz = sz - n;

        ListNode *temp = head;
        for(int i=1; i<sz; i++){
            temp = temp->next;
        }
        
        if(sz == 0){
            head = head->next; 
            return head;
        }
        // else if(sz == 1){

        // }
        else if(temp->next != NULL){
            ListNode *delNode = temp->next;
            temp->next = temp->next->next;
            delete delNode;
        }
        
        
        return head;
    }
};
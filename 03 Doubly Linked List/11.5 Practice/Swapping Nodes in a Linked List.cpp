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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *fast = head;
        ListNode *last = head;
        for(int i=1; i<k; i++){
            fast = fast->next;
        }
        int sz = size(head);
        for(int i=1; i<=sz-k; i++){
            last = last->next;
        }
        swap(fast->val, last->val);
        return head;

    }
};
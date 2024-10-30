class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head->next == NULL) return head;
        ListNode *temp = head;
        while(temp->next != NULL){
            int gcd = __gcd(temp->val, temp->next->val);
            ListNode *nNode = new ListNode(gcd);
            nNode->next = temp->next;
            temp->next = nNode;
            temp = temp->next->next;
        }
        return head;
        
    }
};
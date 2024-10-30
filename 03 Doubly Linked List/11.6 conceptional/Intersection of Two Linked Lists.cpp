class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *tempA = headA;
        
        while(tempA != NULL){
            ListNode *tempB = headB;
            while(tempB != NULL){
                if(tempA == tempB){
                    return tempA;
                }
                tempB = tempB->next;
            }
            tempA = tempA->next;
        }
        return NULL;

    }
};

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        for(ListNode* tempA=headA; tempA!=NULL; tempA = tempA->next)
        {
            for(ListNode* tempB=headB; tempB!=NULL; tempB = tempB->next)
            {
                if(tempA == tempB)
                    return tempA;
            }
        }
        return NULL;
    }
};
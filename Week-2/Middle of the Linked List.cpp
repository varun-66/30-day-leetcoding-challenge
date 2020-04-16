/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        
        ListNode* f=head;
        ListNode* s=head;
        
        while( s!=NULL && s->next!=NULL)
        {
            f=f->next;
            s=s->next->next;
        }
        return f;
        
    }
};

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
    ListNode* swapPairs(ListNode* head) {
        
        if(!head||!head->next) return head;
        ListNode *sol=head->next;
        head->next=head->next->next;
        sol->next=head;
         ListNode *ans=sol;
        while(head&&head->next)
        {
            ListNode *newe=head->next;
            if(!newe->next) return ans;
            head->next=head->next->next;
            head=head->next;
             ListNode *hell;
            hell=head->next;
           
            head->next=newe;
            newe->next=hell;
            head=head->next;
            
        }
        return ans;
    }
};
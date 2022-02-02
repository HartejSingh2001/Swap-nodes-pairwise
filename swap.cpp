// Code accepted in Leetcode but not in Geeks for Geeks practise.
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
        if(head==NULL)
        {
            return head;
        }
        ListNode *temp=head;
        int tempnum=0;
        while(temp!=NULL && temp->next!=NULL)
        {
            tempnum=temp->val;
            temp->val=temp->next->val;
            temp->next->val=tempnum;
            temp=temp->next->next;
        }
        return head;
        
    }
};

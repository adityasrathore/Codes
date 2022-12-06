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
    ListNode* oddEvenList(ListNode* head) {
        if(!head || !head -> next) return head;
        auto dummy = new ListNode(), ansIter = dummy, iter = head;
        for(iter = head; iter && iter -> next; iter = iter -> next -> next)
            ansIter = ansIter -> next = new ListNode(iter -> val);
        if(iter) ansIter = ansIter -> next = new ListNode(iter -> val);
        for(iter = head -> next; iter && iter -> next; iter = iter -> next -> next)
            ansIter = ansIter -> next = new ListNode(iter -> val);
        if(iter) ansIter = ansIter -> next = new ListNode(iter -> val);
        return dummy -> next;
    }
};328. Odd Even Linked List

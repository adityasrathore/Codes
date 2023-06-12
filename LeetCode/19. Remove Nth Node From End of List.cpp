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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *temp = head;
        int count = 0;
    
        while(head!=NULL){
            head = head->next;
            count++;
        }
        head = temp;
        if(count == n)
            return head->next;
        int num = count - n;
        count = 1;
        
        while(count != num){
            temp = temp->next;
            count++;
        }
        ListNode *delNode = temp->next;
        temp->next = temp->next->next;
        delete(delNode);
        return head;
    }
};

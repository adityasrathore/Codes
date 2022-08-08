class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *d=new ListNode(0);
        ListNode *p=l1, *q=l2,*curr=d;
        int carry=0;
        while(p!=NULL || q!=NULL){
            int x,y;
            if(p!=0)
                x=p->val;
            else
                x=0;
            if(q!=0)
                y=q->val;
            else
                y=0;
            int sum=x+y+carry;
            carry=sum/10;
            curr->next=new ListNode(sum%10);
            curr=curr->next;
            if(p!=NULL)
            p = p->next;
            if(q!=NULL)
            q = q->next;
        }
        if (carry > 0) {
        curr->next = new ListNode(carry);
    }
        return d->next;
    }
};

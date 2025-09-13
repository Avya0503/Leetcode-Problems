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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* t1=l1;
        ListNode* t2=l2;
        int c=0;
        int sum=0;
        ListNode* dummy= new ListNode(0);
        ListNode* temp=dummy;
        while(t1 && t2){
            sum=t1->val+t2->val+c;
            int s=sum%10;
            c=sum/10;
            ListNode* newnode= new ListNode(s);
            temp->next=newnode;
            t1=t1->next;
            t2=t2->next;
            temp=temp->next;
        }
        while(t1){
            sum=t1->val+c;
            int s=sum%10;
            c=sum/10;
            ListNode* newnode= new ListNode(s);
            temp->next=newnode;
            t1=t1->next;
            temp=temp->next;
        }
        while(t2){
            sum=t2->val+c;
            int s=sum%10;
            c=sum/10;
            ListNode* newnode= new ListNode(s);
            temp->next=newnode;
            t2=t2->next;
            temp=temp->next;
        }
        if(c){
            ListNode* newnode= new ListNode(c);
            temp->next=newnode;
            temp=temp->next;
        }
        temp=dummy->next;
        delete dummy;
        //reverse(temp);
        return temp;
    }
};

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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* temp1=head;
        ListNode* temp2=head;
        int x;
        while(temp2->next !=NULL){
            temp2=temp1->next;
            x=gcd(temp1->val,temp2->val);
            ListNode* newNode = new ListNode(x);
            newNode->next=temp1->next;
            temp1->next=newNode;
            temp1=temp2;
        }


        return head;
    }
};
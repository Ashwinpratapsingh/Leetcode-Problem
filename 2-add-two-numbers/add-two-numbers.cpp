class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp = new ListNode(0);
        ListNode* ans = temp;
        int carry = 0;

        while(l1 != NULL || l2 != NULL || carry) {
            int x = carry;

            if(l1 != NULL) {
                x += l1->val;
                l1 = l1->next;
            }

            if(l2 != NULL) {
                x += l2->val;
                l2 = l2->next;
            }

            carry = x / 10;
            x = x % 10;

            ans->next = new ListNode(x);
            ans = ans->next;
        }

        return temp->next;
    }
};
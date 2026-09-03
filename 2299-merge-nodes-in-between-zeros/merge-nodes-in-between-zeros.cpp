class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp = head->next;
        ListNode* dummy = new ListNode(0);
        ListNode* ans = dummy;

        int sum = 0;

        while(temp != NULL) {
            if(temp->val == 0) {
                ans->next = new ListNode(sum);
                ans = ans->next;
                sum = 0;
            }
            else {
                sum += temp->val;
            }

            temp = temp->next;
        }

        return dummy->next;
    }
};
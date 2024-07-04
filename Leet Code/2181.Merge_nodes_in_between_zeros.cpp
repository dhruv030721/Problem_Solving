class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp = head;
        ListNode* zero = head;

        while (temp != nullptr) {
            if (temp->val == 0) {
                zero = temp;
                temp = temp->next;
            } else {
                if (temp->next == nullptr || temp->next->next == nullptr) {
                    zero->val += temp->val;
                    zero->next = nullptr;
                    delete temp;
                    break;
                }
                ListNode* temp1 = temp;
                zero->val += temp->val;
                temp = temp->next;
                zero->next = temp;
                delete temp1;
            }
        }

        return head;
    }
};
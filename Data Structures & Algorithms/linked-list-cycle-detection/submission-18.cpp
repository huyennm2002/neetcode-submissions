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
    bool hasCycle(ListNode* head) {
        if (head == nullptr) return false;
        ListNode* headPtr = head;
        ListNode* nextPtr = head->next;
        while (nextPtr != nullptr && nextPtr->next != nullptr) {
            headPtr = headPtr->next;
            nextPtr = nextPtr->next->next;
            if (headPtr == nextPtr) {
                return true;
            }
        }
        return false;
    }
};


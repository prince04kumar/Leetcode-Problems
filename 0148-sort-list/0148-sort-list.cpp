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
ListNode* merge(ListNode* left, ListNode* right) {
    if (!left) return right;
    if (!right) return left;

    ListNode* result = NULL;

    if (left->val <= right->val) {
        result = left;
        result->next = merge(left->next, right);
    } else {
        result = right;
        result->next = merge(left, right->next);
    }
    return result;
}
    ListNode * getmid(ListNode * head){
        ListNode *slow  = head;
        ListNode *fast = head->next;
        while(fast && fast->next ){
            slow = slow->next;
            fast = fast->next ->next;
        }
        return slow;
    }
    ListNode* sortList(ListNode* head) {
        if(!head || !head->next) return head;
        // Get mid using fast and slow pointer
        ListNode* mid = getmid(head);

        ListNode* rightHalf = mid->next;
        mid->next = NULL;
        ListNode* left = sortList(head);
       ListNode* right = sortList(rightHalf);

        return merge(left , right);
 

    }
};
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
    ListNode* middleNode(ListNode* head) {
        vector<int>ans;
        int count = 0;
        ListNode* temp = head;
        while(temp!= nullptr){
           // ans.insert(temp->val);
            count++;
            temp = temp->next;
        } 

        int index = 0;
        if(count%2 == 0){
        index =  (count+1)/2;
        }
        else{
             index = count / 2;
            }

        ListNode* temp2 = head;
        while(index != 0){
            temp2 = temp2->next;
            index--;
        }
        return temp2;
    }
};
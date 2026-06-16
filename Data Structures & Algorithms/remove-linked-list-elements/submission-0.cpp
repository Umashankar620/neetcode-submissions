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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode dummy(0);
        ListNode*curr = &dummy;
        dummy.next = head;
        
        while(head != NULL){
            if(head ->val == val){
                head = head->next;
                curr->next = curr->next->next;
            }
            else{
                curr = head;
                head = head->next;
            }


        }
        return dummy.next;
        
    }
};
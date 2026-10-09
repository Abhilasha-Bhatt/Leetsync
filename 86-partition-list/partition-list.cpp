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
    ListNode* partition(ListNode* head, int x) {
        ListNode* less = nullptr;
        ListNode* more = nullptr;
        ListNode* lessHead = nullptr;
        ListNode* moreHead = nullptr;

        while(head) {
            if(head->val < x) {
                if(!less) {
                    less = head;
                    lessHead = head;
                }
                else {
                    less->next = head;
                    less = less->next;
                }
            }

            else {
                if(!more) {
                    more = head;
                    moreHead = head;
                }
                else {
                    more->next = head;
                    more = more->next;
                }
            }
            head = head->next;
        }
        if(less)
            less->next = NULL;
        if(more)
            more->next = NULL;

        if(!lessHead)
            return moreHead;
        if(!moreHead)
            return lessHead;
        
        less->next = moreHead;
        return lessHead;

    }
};
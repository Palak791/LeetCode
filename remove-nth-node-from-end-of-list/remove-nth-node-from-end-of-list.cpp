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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode * temp = head;
        int count = 0 ;
        while(temp != NULL){
            count++;
            temp = temp-> next;
        }
        if(count == n){
            head = head -> next;//dealing with base case while debugging
            return head;
        }
        count -= n;
        temp = head;
        while(--count ){
            temp = temp -> next;
        }
        if(temp-> next != NULL)temp -> next = temp -> next -> next;
        return head;
    }
};
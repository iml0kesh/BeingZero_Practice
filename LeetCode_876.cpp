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
    int size(ListNode* head){
        auto curr = head;
        int count = 0;
        while(curr){
            count++;
            curr = curr -> next;
        }
        return count;
    }
    ListNode* middleNode(ListNode* head) {
        if(head == NULL) return NULL;
        int n = size(head); // 6
        int steps = n/2; // 3
        // if(n%2==0){
        //     steps--;
        //     steps
        // } // 0 2 
        auto curr = head; // 1
        while(steps--){ 
            curr = curr -> next;
        }
        return curr;
    }
};
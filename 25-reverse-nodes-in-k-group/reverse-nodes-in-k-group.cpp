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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head == nullptr || k<=1) return head; //1,2,3,4,5

        ListNode* temp = head; // 1, k=2
        for(int i=0;i<k;i++){
            if(temp==nullptr)return head; //3
            temp=temp->next;
        }
      

        ListNode* prev = nullptr;
        ListNode* curr = head; // 1
        ListNode* next = nullptr;
        

        for(int i=0;i<k;i++){
            next = curr->next; // next = 2.     // next = 
            curr->next = prev; // 1->next = null
            prev = curr; // prev = 1
            curr=next; // curr = 2
        }

        // remaining 
        if(next!=nullptr){
            head->next = reverseKGroup(next,k);
        }
        return prev; 
    }
};
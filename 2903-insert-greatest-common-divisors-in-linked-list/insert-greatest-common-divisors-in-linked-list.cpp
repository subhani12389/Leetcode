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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* current=head;
        ListNode* currnext=current->next;

        while(current != nullptr && currnext !=nullptr){
            int g=1;
            for(int i=1;i<=current->val && i<=currnext->val;i++){
                if(current->val % i==0 && currnext->val % i ==0){
                    g=i;
                }
            }
            ListNode* node=new ListNode(g);
            current->next=node;
            node->next=currnext;
            current=currnext;
            currnext=currnext->next;
        }
        return head;
    }
};
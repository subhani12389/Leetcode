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
    ListNode* mergeNodes(ListNode* head) {
        vector<int>result;
        ListNode* temp=head->next;
        int sum=0;
        while(temp!=nullptr){
            if(temp->val!=0){
                sum+=temp->val;
            }
            else{
                result.push_back(sum);
                sum=0;
            }
            temp=temp->next;
        }
        ListNode* dummy = new ListNode(0);
        ListNode* curr = dummy;

        for (int val : result) {
            curr->next = new ListNode(val);
            curr = curr->next;
        }

        return dummy->next;
    }
};
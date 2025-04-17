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
        ListNode* deleteDuplicates(ListNode* head) {
            ListNode *ptr=head;
            ListNode *head1=nullptr, *ptr1=nullptr;
            unordered_map<int,int> mp;
            while(ptr){
                mp[ptr->val]++;
                ptr=ptr->next;
            }
            ptr=head;
            while(ptr){
                if(mp[ptr->val]==1){
                    ListNode *n1 = new ListNode(ptr->val);
                    if(head1==nullptr){
                        head1=n1;
                        ptr1=head1;
                    }
                    else{
                        ptr1->next=n1;
                        ptr1=ptr1->next;
                    }
                }
                ptr=ptr->next;
            }
            return head1;
        }
    };
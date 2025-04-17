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
        ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
            ListNode * ptr=list1;
            vector<int> vec;
            while(ptr){
                vec.push_back(ptr->val);
                ptr=ptr->next;
            }
            ptr=list2;
            while(ptr){
                vec.push_back(ptr->val);
                ptr=ptr->next;
            }
            sort(vec.begin(),vec.end());
            int len = vec.size();
            ListNode * head=nullptr;
            for(int i = 0 ; i < len ; i++){
                ListNode * n1 = new ListNode(vec[i]);
                if(head==nullptr){
                    head=n1;
                }
                else{
                    ListNode *ptr=head;
                    while(ptr->next){
                        ptr=ptr->next;
                    }
                    ptr->next=n1;
                }
            }
            return head;
        }
    };
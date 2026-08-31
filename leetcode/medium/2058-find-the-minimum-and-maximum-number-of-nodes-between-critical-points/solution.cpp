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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {

        ListNode* prev=head;
        ListNode* curr=head->next;
        
        
        vector<int> ans={-1,-1};
        int first=-1;
        int last=-1;
        int pos=1;
        int min_dist=INT_MAX;
        

        while(curr->next!=NULL)
        {
            ListNode* next=curr->next;

            if ((curr -> val > prev-> val && curr->val > next->val)
             || (curr -> val < prev-> val && curr->val < next->val))
            {
               if (first==-1)
                    first = pos;
                else
                    {min_dist=min(min_dist,pos-last);}
                last=pos;
                
               
            }

            prev=curr;
            curr=next;
            pos++;


            
                
        }

       if (first==-1 || first==last)
        return ans;


        return {min_dist,last-first};
        
        
    }
};
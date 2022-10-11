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
    int pairSum(ListNode* head) {
        ListNode*temp=head;
        vector<int> v;
        vector<int> ans;
        int sum=0;

        while(temp!=0)
        {
            v.push_back(temp->val);
            temp=temp->next;
        }
        int siz=v.size();
        for(int i=0;i<(siz/2);i++)
        {
            sum=v[i]+v[siz-i-1];
            ans.push_back(sum);
            sum=0;
        }
        int max=ans[0];
        for(int i=0;i<ans.size();i++)
        {
            if(ans[i]>max)
            {
                max=ans[i];
            }
        }
        return max;
    }
};

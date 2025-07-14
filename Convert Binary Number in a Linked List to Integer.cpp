class Solution {
public:
    int getDecimalValue(ListNode* head) {
        ListNode* temp=head;
        vector<int>nums;
        while(temp){
            nums.push_back(temp->val);
            temp=temp->next;
        }
        int sum=0;
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]==1){
                int x=nums.size()-1-i;
                sum+=pow(2,x);
            }
        }
        return sum;
    }
};
class Solution {
public:
    int minDifference(vector<int>& nums) {
        int ans=INT_MAX;
        sort(nums.begin(),nums.end());
        if(nums.size()>4){
            int val=nums.size()-4;
            for(int i=0;i<nums.size()-val;i++){
                ans=min(nums[i+val]-nums[i],ans);
            }
        }
        else{
            ans=0;
        }
        return ans;
    }
};
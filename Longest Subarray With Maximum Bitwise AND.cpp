class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int i = 0;
        int j = 0;
        int count = 0;
        int ans = 0; 
        int val = *max_element(nums.begin(),nums.end());
        while(j < nums.size()){
            if(nums[i] == nums[j]){
                count ++;
                j++;
            }
            else{
                if(nums[i] == val){
                    ans = max(ans,count);
                }
                count = 0;
                i = j;
            }
        }
        if(val == nums[nums.size()-1]){
            ans = max(ans,count);
        }
        return ans;
    }
};
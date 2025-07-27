class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int i=0;
        int j=1;
        int k=2;
        int ans=0;
        while(k<nums.size()){
            
            if(nums[i]<nums[j]){
                if(nums[j]>nums[k]){
                    ans++;
                    i=j;
                    j++;
                    k=j+1;
                }
                else{
                    j++;
                    k++;
                }
            }
            else if(nums[i]>nums[j]){
                if(nums[j]<nums[k]){
                    ans++;
                    i=j;
                    j++;
                    k=j+1;
                }
                else{
                    j++;
                    k++;
                }
            }
            else{
                j++;
                k=j+1;
            }
        }
        return ans;
    }
};
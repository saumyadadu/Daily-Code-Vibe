class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int val=-1;
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                if(val<=nums[j]-nums[i] && nums[i]<nums[j]){
                    val=max(val,nums[j]-nums[i]);
                }
            }
        }
        return val;
    }
};
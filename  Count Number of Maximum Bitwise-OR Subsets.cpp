class Solution {
public:
    int count_subsets(vector<int>& nums, int ind,int sum,int k){
        int n = nums.size();
        if(ind == n){
            if(sum == k ){
                return 1;
            }
            return 0;
        }
        int include = count_subsets(nums, ind+1, sum | nums[ind], k);
        int exclude = count_subsets(nums, ind+1, sum, k);
        return include + exclude;
    }
    int countMaxOrSubsets(vector<int>& nums) {
        int k = 0;
        for(int i=0;i<nums.size();i++){
            k |= nums[i];
        }
        int ans = count_subsets(nums,0,0,k);
        return ans;
    }
};
class Solution {
public:
    int findLHS(vector<int>& nums) {
        int ans=0;
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        for(auto& it:mpp){
            if(mpp.count(it.first+1)){
                ans=max(ans,it.second+mpp[it.first+1]);
            }
        }
        return ans;
    }
};
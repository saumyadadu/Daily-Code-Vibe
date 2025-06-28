class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<int>arr;
        for(int i=0;i<nums.size();i++){
            arr.push_back(nums[i]);
        }
        sort(nums.begin(),nums.end());
        unordered_map<int,int>mpp;
        for(int i=nums.size()-k;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        vector<int>ans;
        for(int i=0;i<arr.size();i++){
            if(mpp[arr[i]]>0){
                ans.push_back(arr[i]);
                mpp[arr[i]]--;
            }
        }
        return ans;
    }
};
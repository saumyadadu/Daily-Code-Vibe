class Solution {
public:
    int minimumDeletions(string word, int k) {
        unordered_map<char,int> mpp;
        for(int i = 0; i < word.size(); i++){
            mpp[word[i]]++;
        }
        
        vector<int> nums;
        for(auto it : mpp){
            nums.push_back(it.second);
        }
        
        sort(nums.begin(), nums.end());
        
        int ans=INT_MAX;
        
        for(int i=0;i<nums.size();i++){
            int val=0;
            for(int j=0;j<nums.size();j++){
                if(nums[j]<nums[i]){
                    val+=nums[j];
                }
                else if(nums[j]>(nums[i]+k)){
                    val+=(nums[j]-(nums[i]+k));
                }
            }
            ans=min(ans,val);
        }
        
        return ans;
    }
};
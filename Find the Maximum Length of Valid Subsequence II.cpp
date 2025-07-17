class Solution {
public:
    int maximumLength(vector<int>& nums, int k) {
        for(int i=0;i<nums.size();i++){
            nums[i]%=k;
        }
        int ans=0;
        for(int i=0;i<nums.size();i++){
            int val1=nums[i];
            vector<pair<int,int>>arr(k);
            arr[val1]={1,0};
            for(int j=i+1;j<nums.size();j++){
                if(val1==nums[j]){
                   arr[val1].first++;
                   arr[val1].second=j;
                }
                else{
                    if(arr[nums[j]].first==0){
                        arr[nums[j]]={1,j};
                    }
                    else if(arr[val1].second>arr[nums[j]].second){
                        arr[nums[j]].first++;
                        arr[nums[j]].second=j;
                    }
                }
            }
            ans=max(ans,arr[val1].first);
            for(int j=0;j<arr.size();j++){
                int res=0;
                if(j!=val1){
                    if(arr[j].second>arr[val1].second){
                        res=2*arr[j].first;
                    }
                    else{
                        res=(2*arr[j].first)+1;
                    }
                }
                ans=max(res,ans);
            }
        }
        
        return ans;
    }
};
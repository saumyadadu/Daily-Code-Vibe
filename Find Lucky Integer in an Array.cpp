class Solution {
public:
    int findLucky(vector<int>& arr) {
        int ans=-1;
        unordered_map<int,int>mpp;
        for(int i=0;i<arr.size();i++){
            mpp[arr[i]]++;
        }
        for(auto it:mpp){
            if(it.second==it.first){
                ans=max(ans,it.first);
            }
        }
        return ans;
    }
};
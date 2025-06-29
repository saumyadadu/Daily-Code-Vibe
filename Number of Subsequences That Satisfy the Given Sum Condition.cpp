class Solution {
public:
    int power(int n,int val){
        long long int ans=1;
        long long int x=2;
        while(n>0){
            if(n%2==0){
                x=(x*x)%val;
                n/=2;
            }
            else{
                ans=(ans*x)%val;
                n--;
            }
        }
        return ans;
    }
public:
    int numSubseq(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        const int MOD=1e9+7;
        int i=0;
        int j=nums.size()-1;
        long long int ans=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]*2<=target){
                ans++;
            }
            else{
                break;
            }
        }
        while(i<j){
            if(nums[i]+nums[j]<=target){
                ans=(ans+power(j-i,MOD)-1)%MOD;
                i++;
            }
            else{
                j--;
            }
        }
        
        return ans;
    }
};
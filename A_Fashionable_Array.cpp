#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        vector<long long int>nums(n);
        long long int val1_even=INT_MAX;
        long long int val2_even=0;
        long long int val1_odd=INT_MAX;
        long long int val2_odd=0;
        for(long long int i=0;i<n;i++){
            cin>>nums[i];
        }
        sort(nums.begin(),nums.end());
        for(long long int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                val2_even=max(val2_even,i);
                val1_even=min(val1_even,i);
            }
            else{
                val2_odd=max(val2_odd,i);
                val1_odd=min(val1_odd,i);
            }
        }
        long long int ans=INT_MAX;
        ans=min(ans,n-(val2_even-val1_even+1));
        ans=min(ans,n-(val2_odd-val1_odd+1));
        cout<<ans<<endl;
    }
}
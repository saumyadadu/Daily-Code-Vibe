#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        vector<long long int>nums(n);
        long long int count=0;
        long long int val=0;
        for(long long int i=0;i<n;i++){
            cin>>nums[i];
            if(i==0){
                val=nums[i];
            }
            if(val==nums[i]){
                count++;
            }
        }
        cout<<count<<endl;
    }
}
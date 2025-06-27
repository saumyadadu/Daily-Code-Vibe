#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        vector<long long int>nums(n);
        for(long long int i=0;i<n;i++){
            cin>>nums[i];
        }
        long long int count=0;
        for(long long int i=0;i<n;i++){
            count++;
            if(count==nums[i]){
                count++;
            }
        }
        cout<<count<<endl;
    }
}
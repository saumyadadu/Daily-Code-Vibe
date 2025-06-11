#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>nums(n);
        int val=INT_MAX;
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        int count=0;
        for(int i=0;i<n;i++){
            nums[i]%=(i+1);
            nums[i]%=(n-i);
            if(nums[i]==0){
                count++;
            }
        }
        if(count==n){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
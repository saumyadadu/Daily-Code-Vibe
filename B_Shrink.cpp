#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        vector<long long int>nums(n,0);
        long long int val=1;
        long long int i=0;
        long long int count=0;
        while(n--){
            if(val%2==1){
                nums[i]=val;
                count++;
            }
            else{
                nums[nums.size()-1-i]=val;
                count++;
            }
            val++;
            if(count==2){
                i++;
                count=0;
            }
        }
        for(long long int i=0;i<nums.size();i++){
            cout<<nums[i]<<" ";
        }
        cout<<endl;
    }
}
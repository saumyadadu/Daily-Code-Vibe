#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int val1=INT_MAX;
        int val2=INT_MIN;
        bool happy=false;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            if(a==1){
                happy=true;
                val1=min(val1,i);
                val2=max(val2,i);
            }
        }
        if(happy){
            if((val2-val1+1)<=x){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}
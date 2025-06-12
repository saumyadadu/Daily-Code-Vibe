#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        long long int count=0;
        bool happy=true;
        for(long long int i=0;i<s.size();i++){
            if(s[i]=='('){
                count++;
            }
            else{
                count--;
            }
            if(count==0 && i!=s.size()-1){
                happy=false;
            }
        }
        if(happy){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}
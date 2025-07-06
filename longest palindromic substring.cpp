#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int  val1=0;
    int val2=0;
    int ans=0;
    string str;
    for(int i=0;i<s.size();i++){
        val1=i;
        val2=i+1;
        while(val1>=0 && val2<s.size() && s[val1]==s[val2]){
            if((val2-val1+1)>ans){
                str=s.substr(val1,val2-val1+1);
                ans=val2-val1+1;
            }
            val1--;
            val2++;
        }
        val1=i;
        val2=i;
        while(val1>=0 && val2<s.size() && s[val1]==s[val2]){
            if((val2-val1+1)>ans){
                str=s.substr(val1,val2-val1+1);
                ans=val2-val1+1;
            }
            val1--;
            val2++;
        }
    }
    cout<<str<<endl;
}
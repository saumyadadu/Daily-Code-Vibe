#include <bits/stdc++.h>
using namespace std;
struct manacher{
    vector<int>p;
    void run_manacher(string s){
        int n=s.size();
        p.assign(n,1);
        int l=0,r=2;
        for(int i=1;i<s.size();i++){
            p[i]=max(0,min(r-i,p[l+r-i]));
            while(i-p[i]>=0 && i+p[i]<n && s[i-p[i]]==s[i+p[i]]){
                p[i]++;
            }
            if(i+p[i]>r){
                r=i+p[i];
                l=i-p[i];
            }
        }
        int ind=0;
        int ans=0;
        for(int i=0;i<p.size();i++){
            if(ans<=p[i]-1){
                ans=p[i]-1;
                ind=i;
            }
        }
        int i=ind;
        int j=ind;
        while(s[i]==s[j] && i>=0 && j<s.size()){
            i--;
            j++;
        }
        i++;
        j--;
        string str=s.substr(i,j-i+1);
        for(int k=0;k<str.size();k++){
            if(str[k]!='#'){
                cout<<str[k];
            }
        }
        cout<<endl;
    }
    void build(string s){
        string t;
        for(auto v:s){
            t+=string("#")+v;
        }
        t+=string("#");
        run_manacher(t);
    }
}m;
int main(){
    string s;
    cin>>s;
    m.build(s);
}
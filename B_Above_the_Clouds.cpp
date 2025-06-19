#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        unordered_map<char,int>mpp;
        for(int i=1;i<s.size()-1;i++){
            mpp[s[i]]++;
        }
        bool happy=true;
        for(auto it:mpp){
            if(it.second>=2 || it.first==s[0] || it.first==s[s.size()-1]){
                happy=false;
                cout<<"Yes"<<endl;
                break;
            }
        }
        if(happy){
            cout<<"No"<<endl;
        }
    }
}
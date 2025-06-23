#include <iostream>
using namespace std;
int main(){
    vector<string>arr;
    arr.push_back("qwertyuiop");
    arr.push_back("asdfghjkl;");
    arr.push_back("zxcvbnm,./");
    char ch;
    cin>>ch;
    string s;
    cin>>s;
    string str;
    if(ch=='R'){
        for(int i=0;i<s.size();i++){
            char val=s[i];
            for(int j=0;j<arr.size();j++){
                string x=arr[j];
                bool happy=false;
                for(int k=0;k<x.size();k++){
                    if(x[k]==val){
                        cout<<x[k-1];
                        happy=true;
                        break;
                    }
                }
                if(happy){
                    break;
                }
            }
        }
    }
    else{
        for(int i=0;i<s.size();i++){
            char val=s[i];
            for(int j=0;j<arr.size();j++){
                string x=arr[j];
                bool happy=false;
                for(int k=0;k<x.size();k++){
                    if(x[k]==val){
                        cout<<x[k+1];
                        happy=true;
                        break;
                    }
                }
                if(happy){
                    break;
                }
            }
        }
    }
    cout<<endl;
}
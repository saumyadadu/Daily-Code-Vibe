#include <iostream>
using namespace std;
long long int power(long long int n){
    long long int ans = 1;
    long long int x = 2;
    while(n>0){
        if(n%2!=0){
            ans*=x;
            n--;
        }
        else{
            x*=x;
            n/=2;
        }
    }
    return ans;
}
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n,l,r,k;
        cin>>n>>l>>r>>k;
        if(n%2!=0){
            cout<<l<<endl;
        }
        else{
            long long int val1 = log2(l);
            long long int val2 = log2(r);
            if(n>=4 && val2-val1>0){
                if(k<n-1){
                    cout<<l<<endl;
                }
                else{
                    long long int res = power(val1+1);
                    cout<<res<<endl;
                }
            }
            else{
                cout<<-1<<endl;
            }
        }
    }
}
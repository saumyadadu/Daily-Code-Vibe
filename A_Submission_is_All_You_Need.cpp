#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        int res = 0;
        int temp;
        cin >> temp;
        vector<int> ns(temp);
        int count0 = 0 , count1 = 0;
        for(int j = 0 ; j < temp ; j++){
            cin >> ns[j];
        }
        res += min(count0,count1);
        for(int j = 0 ; j < temp ; j++){
            if(ns[j] == 0){
                res += 1;
            }
            else{
                res += ns[j];
            }
        }
        cout<<res<<endl;
    }
}
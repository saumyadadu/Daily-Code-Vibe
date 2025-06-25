#include <iostream>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    vector<long long int>nums(n);
    for(long long int i=0;i<n;i++){
        cin>>nums[i];
    }
    sort(nums.begin(),nums.end());
    vector<pair<long long int,long long int> >arr;
    arr.push_back(make_pair(abs(nums[1]-nums[0]),abs(nums[nums.size()-1]-nums[0])));
    for(long long int i=1;i<nums.size()-1;i++){
        long long int val1=min(abs(nums[i]-nums[i-1]),abs(nums[i+1]-nums[i]));
        long long int val2=max(abs(nums[i]-nums[0]),abs(nums[nums.size()-1]-nums[i]));
        arr.push_back(make_pair(val1,val2));
    }
    arr.push_back(make_pair(abs(nums[nums.size()-1]-nums[nums.size()-2]),abs(nums[nums.size()-1]-nums[0])));
    for(long long int i=0;i<arr.size();i++){
        cout<<arr[i].first<<" "<<arr[i].second<<endl;
    }
}
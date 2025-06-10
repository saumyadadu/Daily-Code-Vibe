class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char,int>mpp;
        int val1=0;
        int val2=s.size();
        for(int i=0;i<s.size();i++){
            mpp[s[i]]++;
        }
        for(auto it:mpp){
            if(it.second%2==0){
                val2=min(val2,it.second);
            }
            if(it.second%2!=0){
                val1=max(val1,it.second);
            }
        }
        return val1-val2;
    }
};
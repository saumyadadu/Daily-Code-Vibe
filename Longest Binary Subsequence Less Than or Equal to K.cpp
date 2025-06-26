class Solution {
public:
    int longestSubsequence(string s, int k) {
        long long int ans=0;
        int count=0;
        int power=0;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]=='0'){
                power++;
                count++;
            }
            else{
                if(power<32){
                    ans+=(1LL<<power);
                    if(ans<=k){
                        count++;
                        power++;
                    }
                }
            }
        }
        return count;
    }
};
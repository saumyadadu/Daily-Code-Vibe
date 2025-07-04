class Solution {
public:
    vector<long long>power;
    char final(long long k, vector<int>& operations){
        if(k==1){
            return 'a';
        }
        else{
            long long int count=0;
            while(count<power.size() && power[count]<k){
                count++;
            }
            count--;
            if(operations[count]==0){
                return final(k-power[count],operations);
            }
            else{
                char ch=final(k-power[count],operations);
                if(ch=='z'){
                    return 'a';
                }
                else{
                    return ch+1;
                }
            }
        }
    }
    char kthCharacter(long long k, vector<int>& operations) {
        long long int res=1;
        while(res<k){
            power.push_back(res);
            res*=2;
        }
        return final(k,operations);
    }
};
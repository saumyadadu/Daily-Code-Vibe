class Solution {
public:
    int winningPlayerCount(int n, vector<vector<int>>& pick) {
        sort(pick.begin(),pick.end());
        int val=pick[0][0];
        int res=pick[0][1];
        int count=0;
        int temp=0;
        int ans=0;
        for(int i=0;i<pick.size();i++){
            if(val==pick[i][0]){
                if(pick[i][1]==res){
                    count++;
                }
                else{
                    temp=max(temp,count);
                    count=1;
                    res=pick[i][1];
                }
            }
            else{
                if(count>0){
                    temp=max(temp,count);
                }
                if(temp>=val+1){
                    ans++;
                }
                temp=0;
                count=1;
                val=pick[i][0];
                res=pick[i][1];
            }
        }
        if(count>0){
            temp=max(temp,count);
        }
        if(temp>=val+1){
            ans++;
        }
        return ans;
    }
};
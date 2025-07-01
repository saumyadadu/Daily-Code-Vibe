class Solution {
public:
    int possibleStringCount(string word) {
        int ans=1;
        char ch=word[0];
        int count=0;
        for(int i=0;i<word.size();i++){
            if(word[i]==ch){
                count++;
            }
            else{
                ans+=(count-1);
                ch=word[i];
                count=1;
            }
        }
        if(count>0){
            ans+=count-1;
        }
       
        return ans;
    }
};
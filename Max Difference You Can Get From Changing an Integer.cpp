class Solution {
public:
    int maxDiff(int num) {
        string s=to_string(num);
        char ch;
        
        for(int i=0;i<s.size();i++){
            if(s[i]!='9'){
                ch=s[i];
                break;
            }
        }
        for(int i=0;i<s.size();i++){
            if(s[i]==ch){
                s[i]='9';
            }
        }
        int max_val=stoi(s);
        s=to_string(num);
        int min_val=0;
        if(s[0]=='1'){
            int val=0;
            for(int i=0;i<s.size();i++){
                if(s[i]!='1' && s[i]!='0'){
                    ch=s[i];
                    val=1;
                    break;
                }
            }
            for(int i=0;i<s.size();i++){
                if(s[i]==ch && val==1){
                    s[i]='0';
                }
            }
        }
        else{
            ch=s[0];
            for(int i=0;i<s.size();i++){
                if(s[i]==ch){
                    s[i]='1';
                }
            }
        }
        min_val=stoi(s);
        return max_val-min_val;
    }
};
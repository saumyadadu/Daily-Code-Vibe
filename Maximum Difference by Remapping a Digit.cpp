class Solution {
public:
    int minMaxDifference(int num) {
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
        ch=s[0];
        for(int i=0;i<s.size();i++){
            if(s[i]==ch){
                s[i]='0';
            }
        }
        int min_val=stoi(s);
        return max_val-min_val;
    }
};
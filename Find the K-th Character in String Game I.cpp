class Solution {
public:
    char kthCharacter(int k) {
        string word="a";
        int count=word.size();
        while(k>count){
            for(int i=0;i<count;i++){
                char ch=word[i];
                if(ch=='z'){
                    word.push_back('a');
                }
                else{
                    word.push_back(ch+1);
                }
            }
            count*=2;
        }
        return word[k-1];
    }
};
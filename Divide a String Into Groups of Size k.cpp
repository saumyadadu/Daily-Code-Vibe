class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        int count=0;
        vector<string>nums;
        string str;
        for(int i=0;i<s.size();i++){
            if(count<k){
                str.push_back(s[i]);
                count++;
            }
            else{
                nums.push_back(str);
                string x;
                str=x;
                count=0;
                str.push_back(s[i]);
                count++;
            }
        }
        if(count>0){
            nums.push_back(str);
        }
        int val=k-nums[nums.size()-1].size();
        while(val>0){
            nums[nums.size()-1].push_back(fill);
            val--;
        }
        return nums;
    }
};
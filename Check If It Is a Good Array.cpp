class Solution {
public:
    int gcd(int a,int b){
        while(b!=0){
            int temp=b;
            b=a%b;
            a=temp;
        }
        return a;
    }
public:
    bool isGoodArray(vector<int>& nums) {
        if(nums.size()==1){
            if(nums[0]==1){
                return true;
            }
            return false;
        }
        int val=nums[0];
        for(int i=1;i<nums.size();i++){
            val=gcd(val,nums[i]);
            if(val==1){
                return true;
            }
        }
        return false;
    }
};
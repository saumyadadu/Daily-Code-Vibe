class Solution {
public:
    vector<int> smallestSubarrays(vector<int>& nums) {
        vector<int>bits(32,-1);
        vector<int> ans(nums.size() , 0);
        for(int i = nums.size()-1 ; i>= 0; i--){
            int val = nums[i];
            int count = 0;
            while(val > 0){
                count++ ;
                val/=2;
            }
            int res = 0;
            while(res <= count){
                if((nums[i] & (1<<res))!= 0){
                    if(bits[res]== -1){
                        bits[res] = i;
                    }
                    else{
                        bits[res] = min(bits[res], i);
                    }
                }
                res++;
            }
            int bit_val = 0;
            for(int j = 0;j < bits.size(); j++){
                bit_val = max(bit_val,bits[j]);
            }
            ans[i] = bit_val - i + 1;
            if(ans[i] <= 0){
                ans[i] = 1;
            }
        }
        return ans;
    }
};
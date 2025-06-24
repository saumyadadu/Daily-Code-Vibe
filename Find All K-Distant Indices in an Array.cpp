class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        set<int>st;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==key){
                for(int j=0;j<nums.size();j++){
                    if(abs(i-j)<=k){
                        st.insert(j);
                    }
                }
            }
        }
        vector<int>arr;
        for(auto it=st.begin();it!=st.end();it++){
            arr.push_back(*it);
        }
        return arr;
    }
};
class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        vector<vector<int> >nums1;
        vector<vector<int> >nums2;
        int count=0;
        int j=0;
        vector<int>arr(3,0);
        for(int i=0;i<nums.size();i++){
            if((nums[i]-nums[j])<=k){
                arr[count]=nums[i];
                count++;
                if(count==3){
                    nums1.push_back(arr);
                    j+=3;
                    arr[0]=0;
                    arr[1]=0;
                    arr[2]=0;
                    count=0;
                }
            }
            else{
                return nums2;
            }
        }
        if(count>=3){
            nums1.push_back(arr);
        }
        return nums1;
    }
};
    
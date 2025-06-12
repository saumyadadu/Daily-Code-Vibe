class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        priority_queue<pair<int,string>,vector<pair<int,string>>,greater<pair<int,string>>>pq;
        unordered_map<string,int>mpp;
        for(int i=0;i<words.size();i++){
            mpp[words[i]]--;
        }
        for(auto it:mpp){
            pq.push(make_pair(it.second,it.first));
        }
        vector<string>nums;
        while(k--){
            nums.push_back(pq.top().second);
            pq.pop();
        }
        
        return nums;
    }
};
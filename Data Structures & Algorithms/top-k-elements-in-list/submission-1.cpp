class Solution {
public:

    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mp;

        for(auto i : nums) {
            mp[i]++;
        }

        priority_queue<pair<int,int>> pq;

        for(auto i : mp) {
            pq.push({i.second,i.first});
        }

        vector<int> res(k);

        for(int i = 0; i < k; i++) {
            res[i] = pq.top().second;
            pq.pop();
        }

        return res;
        
    }
};

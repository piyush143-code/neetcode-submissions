class Solution {
public:

    static bool compare(pair<int,int> &a, pair<int,int> &b) {
        return a.second > b.second;
    }

    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mp;

        for(auto i : nums) {
            mp[i]++;
        }

        vector<pair<int,int>> v;

        for(auto i : mp) {
            v.push_back({i.first,i.second});
        }

        sort(v.begin(), v.end(),compare);

        vector<int> res(k);

        int j = 0;

        for(auto i : v) {
            res[j++] = i.first;
            if(j == k) {
                return res;
            }
        }
        
    }
};

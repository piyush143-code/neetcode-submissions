class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;

        for(int i = 0; i < nums.size(); i++) {
            int x = target - nums[i];
            auto j = mp.find(x);

            if(j != mp.end()) {
                return {j->second,i};
            }

            mp[nums[i]] = i;
        }
    }
};

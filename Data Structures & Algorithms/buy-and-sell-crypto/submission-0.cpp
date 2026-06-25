class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int max_profit = 0;

        for (auto i : prices) {
            minPrice = min(minPrice,i);
            max_profit = max(max_profit,i-minPrice);
        }
        return max_profit;
    }
};

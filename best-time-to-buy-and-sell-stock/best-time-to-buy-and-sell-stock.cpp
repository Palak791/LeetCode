class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()<2)
            return 0;
        int min = prices[0];
        int maxProfit= 0;
        for(int i = 1;i <prices.size();i++){
            if(min > prices[i])
                min =prices[i];
            if(maxProfit < (prices[i] - min))
                maxProfit = prices[i] - min;
        }
        return maxProfit;
    }
};
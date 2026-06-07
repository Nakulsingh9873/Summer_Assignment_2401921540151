//121. Best Time to Buy and Sell Stock
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int minimum = prices[0],maximum = 0;
        for(int i = 0; i < prices.size(); i++)
        {
            if(prices[i] < minimum)
            {
                minimum = prices[i];
            }
            else
            {
                int profit = prices[i] - minimum;
                if(profit > maximum)
                {
                    maximum = profit;
                }
            }
           
        }
        return maximum;
    }
};
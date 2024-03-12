class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size = prices.size();
    int min = prices[0];
    int max_profit=0;
     int a;
    for (int i = 1; i < size; i++)
    {   
          a=prices[i];
        if (a-min>max_profit)
        {
            max_profit=a-min;
        }
        if(a<min){
            min=a;
        }
        
    }
    return max_profit;
    }
};
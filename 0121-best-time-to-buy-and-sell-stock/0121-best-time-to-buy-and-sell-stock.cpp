class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = prices[0]; 
        int n = prices.size();
        int profit = 0;
        int i = 1;
        
        while(i<n){
            if((prices[i]-min)>0){
                profit = max(prices[i]-min,profit);
            }else{
                min = prices[i];
            }
            i++;
        }
       return profit;
    }
};
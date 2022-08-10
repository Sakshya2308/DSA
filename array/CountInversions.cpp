class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int mn = INT_MAX, mx = INT_MIN, minpos = INT_MAX, maxpos = INT_MIN;
        for(int i = 0; i < prices.size(); i++){
            if(prices[i]<mn){
                mn = prices[i];
                minpos = i;
            }
        }
        if(minpos == prices.size()){
            return 0;
        }
        for(int i = minpos; i < prices.size(); i++) mx = max(mx,prices[i]);
         return mx;   
    }
};

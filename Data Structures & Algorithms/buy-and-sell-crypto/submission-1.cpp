class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l = 0;
        int r = l+1;
        int maxn = 0;

        while (r < prices.size()){
            while ( (prices[r] - prices[l])>0 ){
                maxn = max(maxn,prices[r]-prices[l]);
                if (r+1 < prices.size()) r++;
                else return maxn;
            }
            l = r;
            r++;
        }
        return maxn;
    }
};
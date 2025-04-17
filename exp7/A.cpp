class Solution {
    public:
        int maxProfit(vector<int>& prices) {
            int mini = INT_MAX;
            int ans = 0, n = prices.size();
            for(int i = 0 ; i < n ; i++){
                if(mini > prices[i]){
                    mini=prices[i];
                }
                int val = prices[i]-mini;
                if(ans < val){
                    ans = val;
                }
            }
            return ans;
        }
    };
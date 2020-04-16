class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int i,j,n=prices.size();
        if(n==0) return 0;
        int curr=prices[0];
        int pro=0;
        
        for(i=1;i<n;i++) {
            if(prices[i]>curr){
                pro+=(prices[i]-curr);
                curr=prices[i];
            }
            else {
                curr=prices[i];
                
            }
        }
        return pro;
        
    }
};

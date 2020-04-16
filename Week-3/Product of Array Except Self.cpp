class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int i,n=nums.size();
        vector<int> ans(n);
        // int p=1;
        ans[0]=1;
        for(i=1;i<n;i++){
                ans[i]=nums[i-1]*ans[i-1];
                // p=p*nums[i-1];
        }
        int p=1;
        for(i=n-1;i>=0;i--){
            
            ans[i]*=p;
            p=p*nums[i];
        }
        return ans;
      
    }
};

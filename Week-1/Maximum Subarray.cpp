class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int mx=nums[0],csum=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            csum=max(nums[i]+csum,nums[i]);
            mx=max(mx,csum);
        }
        return mx;
        
    }
};

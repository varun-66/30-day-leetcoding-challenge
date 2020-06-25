class Solution {
public:
    
    bool canJump(vector<int>& nums) {
        int n=nums.size(),i;
        
        int last=n-1;
        
        for(i=n-2;i>=0;i--)
        {
            if(i+nums[i]>=last)
                last=i;
        }
        
        return last==0;
    }
};

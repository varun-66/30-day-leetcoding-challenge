class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int i,n=nums.size();
        long long left[n],right[n];
        left[0]=nums[0],right[n-1]=nums[n-1];
        for(i=1;i<n;i++){
            left[i]=left[i-1]*nums[i];
        }
        
        for(i=n-2;i>=0;i--){
            right[i]=right[i+1]*nums[i];
        }
        
        for(i=0;i<n;i++){
            if(nums[i]!=0) nums[i]=((left[i]*right[i])/(nums[i]*nums[i]));
            else {
                if(i-1>=0 && i+1<n) nums[i]=left[i-1]*right[i+1];
                else if(i-1>=0) nums[i]=left[i-1];
                else if(i+1<n) nums[i]=right[i+1];
            }
        }
        return nums;
    }
};

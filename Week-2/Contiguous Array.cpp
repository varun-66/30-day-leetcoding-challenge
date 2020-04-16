class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        
        int i,n=nums.size();
        int mx=0;
        unordered_map<int,int> mp;
        int pre=0;
        for(i=0;i<n;i++){
            if(nums[i]==1) 
            pre+=1;
            else 
                pre+=-1;
            if(pre==0) mx=max(mx,i+1);
            
            if(mp.find(pre)!=mp.end()){
                mx=max(mx,i-mp[pre]);
            }
            else 
                mp.insert({pre,i});
        }
        
        return mx;
        
    }
};

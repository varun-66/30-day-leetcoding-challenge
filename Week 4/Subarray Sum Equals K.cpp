class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size(),i;
        unordered_map<int,int> m;
        int pre=0;
        int c=0;
        
        for(i=0;i<n;i++){
            pre+=nums[i];
            // cout<<m[pre]<<" ";
            if(pre==k) c++;
            if(m.find(pre-k)!=m.end() ){
                        c+=m[pre-k];
                }
            m[pre]++;
            
            
//             if(pre==k) {
                
//                 if(m.find(pre)!=m.end()){
//                     c+=(m[pre]);
//                     if(nums[i]==k){
//                         c++;
//                     }
//                 }
//                 else {
//                     c++;
//                 }
//             }
//             else {
//                 if(nums[i]==k){
//                     c++;
//                 }
//                 if(m.find(pre-k)!=m.end() ){
//                     if(pre-k!=nums[i])
//                         c+=m[pre-k];
//                 }
                
//             }
//             cout<<i<<" "<<c<<"\n";
            // m[pre]++;
        }
// [1,2,1,2,1]
// 3
        return c;
    }
};

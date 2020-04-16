class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int n=nums.size();
        int i,j=0;
        
        for(i=0;i<n;i++){
            if(nums[i]!=0){
                nums[j]=nums[i];
                j++;
            }
        }
        
        for(i=j;i<n;i++)
            nums[i]=0;
        
//         i=0,j=n-1;
//         while(i<j)
//         {
//             while(nums[i]!=0){
//                 i++;
//             }
//             while(nums[j]==0){
//                 j++;
//             }
//             swap(nums[i],nums[j]);
//             i++;
//             j--;
//         }
        
    }
};

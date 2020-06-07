class Solution {
public:

    int search(vector<int>& v, int target) {
        
        int i=0,j=v.size()-1;
        int key=target;
        
        while(i<=j){
            
            int left=v[i];
            int right=v[j];
            int m=i+(j-i)/2;
            int mid=v[m];
            
            if(mid==target) return m;
            
            // left rotation
            if(mid> right){
                if(target>=left && target<mid){
                    j=m-1;
                }
                else 
                    i=m+1;
            }
            
            
            // right rotation
            else if(mid<left){
                if(target>mid && target<=right){
                    i=m+1;
                }
                else 
                    j=m-1;
            }
            
            
            // sorted
            else {
                if(target<mid) j=m-1;
                else i=m+1;
            }
        }
    
        
        return -1;
        
    }
};

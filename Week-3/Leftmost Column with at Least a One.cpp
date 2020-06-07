/**
 * // This is the BinaryMatrix's API interface.
 * // You should not implement it, or speculate about its implementation
 * class BinaryMatrix {
 *   public:
 *     int get(int x, int y);
 *     vector<int> dimensions();
 * };
 */

class Solution {
public:
    int leftMostColumnWithOne(BinaryMatrix &mat) {
        
        vector<int> size=mat.dimensions();
        int row=size[0],col=size[1];
        int i=0,j=col-1;
        int ans=INT_MAX;
        
        while(i<row)
        {
            if(j<ans){
                if(mat.get(i,j)==1){
                    ans=min(ans,j);
                    j=j-1;
                    if(j<0) {
                        i=i+1;
                        j=col-1;
                    }

                }
                else {
                    i=i+1;
                    j=col-1;
                }
            }
            else {
                j=j-1;
                if(j<0) {
                        i=i+1;
                        j=col-1;
                    }
            }
        }
        if(ans==INT_MAX) ans=-1;
        return ans;
        
    }
};

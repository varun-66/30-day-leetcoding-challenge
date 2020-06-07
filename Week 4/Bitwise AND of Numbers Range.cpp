class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
        
        while(n>m)
        {
            n=n&(n-1);
        }
        return n&m;
        
//         if(m+1==n) return m&n;
//         if(m==0 || n==0) return 0;
//         if(m==n) return m;
        
//         int msb1=(int)log2(m);
//         int msb2=(int)log2(n);
        
//         if(msb1!=msb2)
//         {
//             return 0;
//         }
//         else 
//         {
            
//             int res=(int)pow(2,msb1);
//             int i=msb1-1;
//             if(n-2>m){
//                 while(i>=0)
//                 {
//                     if((m&(1<<i)) && (n&(1<<i)))
//                     {
//                         res+=(int)pow(2,i);
//                     }
//                     i--;
//                 }
//             }
//             return res;
//         }
        
        
    }
};

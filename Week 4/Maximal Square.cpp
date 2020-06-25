class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        
        int i,j;
        
        int n=matrix.size();
        if(n==0) return 0; 
        int m=matrix[0].size();
        
        if(n<2 || m<2)
        {
            for(i=0;i<n;i++)
            {
                for(j=0;j<m;j++)
                {
                    if(matrix[i][j]=='1') return 1;
                }
            }
            return 0;
        }
        
        int dp[n+1][m+1];
        memset(dp,0,sizeof(dp));
        
        for(i=1;i<n+1;i++)
        {
            for(j=1;j<m+1;j++)
            {
                if(matrix[i-1][j-1]=='0') dp[i][j]=0;
                else
                {
                    int mn=min(min(dp[i-1][j],dp[i][j-1]),dp[i-1][j-1]);
                
                    dp[i][j]=mn+1;   
                }
            }
        }
        
        int mx=0;
        
        for(i=0;i<=n;i++)
        {
            for(j=0;j<=m;j++)
            {
                mx=max(mx,dp[i][j]);
                cout<<dp[i][j]<<" ";
            }
            cout<<"\n";
        }
        
        return mx*mx;
        return -1;
    }
};

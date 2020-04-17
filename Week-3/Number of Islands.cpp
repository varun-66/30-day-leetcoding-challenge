class Solution {
public:
    bool isvalid(int i,int j,int row,int col,vector<vector<bool>> vis,vector<vector<char>> grid)
    {
        if(i>=0 && i<=row-1 && j>=0 && j<=col-1 && vis[i][j]==false && grid[i][j]=='1') return true;
        return false;
    }
    void dfs(vector<vector<char>> &grid,int i, int j)
    {
        grid[i][j]='0';
        if(i-1>=0 && grid[i-1][j]=='1')
            dfs(grid,i-1,j);
        if(i+1<=grid.size()-1 && grid[i+1][j]=='1')
            dfs(grid,i+1,j);
        if(j-1>=0 && grid[i][j-1]=='1')
            dfs(grid,i,j-1);
        if(j+1<=grid[0].size()-1 && grid[i][j+1]=='1')
            dfs(grid,i,j+1);
        
    }
    
    int numIslands(vector<vector<char>>& grid) {
        
        int row=grid.size();
        if(row==0) return 0;
        int col=grid[0].size();
        if(col==0) return 0;
        
        int count=0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]=='1'){
                    count++;
                    dfs(grid,i,j);
                }
            }
        }
        return count;
    }
};

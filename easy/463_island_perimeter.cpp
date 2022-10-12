class Solution {
public:
    bool vis[100][100]={false};
    void dfs(int i,int j,vector<vector<int>> &grid,int x,int y,int &per)
    {
        int n=grid.size();
        int m=grid[0].size();
        if((i>=0 && j>=0) && (i<n &&j<m))
        {
        if(vis[i][j])
        {
            if(grid[i][j]==0 && grid[x][y]==1) per+=1;
            return;
        }
       vis[i][j]=true;
            
        }
        
        if(i<0 || j<0)
        {
            if(grid[x][y]==1) per+=1;
            return;
        }
        if(i>=n || j>=m)
        {
             if(grid[x][y]==1) per+=1;
            return;
        }
        
        if(grid[x][y]==1 && grid[i][j]==0) 
       {
            per+=1;
            cout<<"for x y "<<x<<" "<<y<<" per is "<<per<<endl;
            return;
        }
        
        dfs(i+1,j,grid,i,j,per);
       
        dfs(i,j+1,grid,i,j,per);
       
        dfs(i-1,j,grid,i,j,per);

        dfs(i,j-1,grid,i,j,per);
       
    }
    
    int islandPerimeter(vector<vector<int>>& grid) {
        int per=0;
        int n=grid.size();
        int m=grid[0].size();
        
        dfs(0,0,grid,0,0,per);
        return per;
    }
};

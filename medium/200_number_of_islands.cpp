class Solution {
public:
    int vis[310][310]={0};
int fin=0;
void dfs(vector<vector<char>> &grid,int sr,int sc)
{
  int n=grid.size();
  int m=grid[0].size();

   if(sr<0 || sc<0)
        {
           return;
        }
   if(sr>=n || sc>=m)
        {
            return;
        }
   if(grid[sr][sc]=='0')
        {
            return;
        }
    if(vis[sr][sc]) return;
        vis[sr][sc]=1;
        dfs(grid,sr+1,sc);
        dfs(grid,sr-1,sc);
        dfs(grid,sr,sc+1);
        dfs(grid,sr,sc-1);
}

int numIslands(vector<vector<char>> &grid)
{
  int n=grid.size();
  int m=grid[0].size();
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
      if(vis[i][j]) continue;
      else if(grid[i][j]=='1')
      {
        dfs(grid,i,j);
        fin+=1;
      }
    }
  }
  return fin;
}

};

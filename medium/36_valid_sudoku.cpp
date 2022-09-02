class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n=board.size();
        
        for(int i=0;i<n;i++)
        {
            map<char,int> m;
            for(int j=0;j<n;j++)
            {
                if(board[i][j]=='.') continue;
                else if(m.find(board[i][j])!=m.end()) return false;
                else m[board[i][j]]++;
            }
        }
        
        for(int i=0;i<n;i++)
        {
            map<char,int> m;
            for(int j=0;j<n;j++)
            {
                if(board[j][i]=='.') continue;
                else if(m.find(board[j][i])!=m.end()) return false;
                else m[board[j][i]]++;
            }
        }
        
        for(int i=0;i<n;i+=3)
        {
            for(int j=0;j<n;j+=3)
            {
                map<char,int> m;
                for(int k=i;k<i+3;k++)
                {
                     for(int l=j;l<j+3;l++)
                     {
                if(board[k][l]=='.') continue;
                else if(m.find(board[k][l])!=m.end()) return false;
                else m[board[k][l]]++;
                     }
                    
                }
            }
        }
        return true;
    }
};

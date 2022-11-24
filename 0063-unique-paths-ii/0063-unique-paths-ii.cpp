class Solution {
public:
    int t[101][101];
    int sol(vector<vector<int>> o,int i,int j)
    {
         if(i>o.size()-1 || j>o[0].size()-1) return 0;
        if(o[i][j]==1) return 0;
         if(i==o.size()-1&&j==o[0].size()-1) return 1;
        
        if(t[i][j]!=-1) return t[i][j];       
         return t[i][j]= sol(o,i+1,j)+sol(o,i,j+1);
    }
    int uniquePathsWithObstacles(vector<vector<int>>& o) {
        memset(t,-1,sizeof(t));
        return sol(o,0,0);
    }
};
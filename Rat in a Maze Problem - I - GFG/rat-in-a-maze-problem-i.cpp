//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    bool valid(int i, int j, int n)
    {
         if(i<0 || j<0 || i>=n || j>=n) return false;
         return true;
    }
    void sol(vector<vector<int>> &m, int n, int i, int j, string curr_path, vector<string>&all_paths, vector<vector<int>>vis)
    {
       
        if(i==n-1 && j==n-1){all_paths.push_back(curr_path);return;}
        if(m[i][j]==0) return;
        vis[i][j]=1;
        if(valid(i+1,j, n) && vis[i+1][j]==0)sol(m, n, i+1, j, curr_path+"D", all_paths, vis);
        if(valid(i-1,j, n) && vis[i-1][j]==0)sol(m, n, i-1, j, curr_path+"U", all_paths, vis);
        if(valid(i,j+1, n) && vis[i][j+1]==0)sol(m, n, i, j+1, curr_path+"R", all_paths, vis);
        if(valid(i,j-1, n) && vis[i][j-1]==0)sol(m, n, i, j-1, curr_path+"L", all_paths, vis);
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // cout<<1;
        if(m[n-1][n-1]==0 || m[0][0]==0) return {"-1"};
        vector<string>all_paths;
        vector<vector<int>>vis(n,vector < int > (n, 0));
        sol(m, n, 0, 0, "", all_paths, vis);
        
        
        return all_paths;
    }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends
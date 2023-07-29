//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int t[1001][1001];
    int sol(int W, int wt[], int val[], int n,  int i)
    {
        if(W==0 ||  i>=n) {return 0;}
        if(t[i][W]!=-1) return t[i][W];
        int ans;
        
        if(wt[i]<=W)
        {
            ans =max(val[i]+sol(W-wt[i],wt,val,n,i+1),sol(W,wt,val,n,i+1));
        }
        else {ans= sol(W,wt,val,n,i+1);}
        return t[i][W]=ans;
    }
    int knapSack(int W, int wt[], int val[], int n) 
    { 
        memset(t,-1,sizeof(t));
        return sol(W,wt,val,n, 0);
        
    }
};

//{ Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends
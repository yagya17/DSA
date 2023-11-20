//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
void sol(vector<int>&arr, int N, int i, int sum, vector<int>&all_subsetsum)
{
    if(i==N){all_subsetsum.push_back(sum); return;}
    sol(arr, N, i+1, sum+arr[i], all_subsetsum);
    sol(arr, N, i+1, sum, all_subsetsum);
}
    vector<int> subsetSums(vector<int> arr, int N)
    {
       vector<int> all_subsetsum;
       sol(arr, N, 0, 0, all_subsetsum);
       
       return all_subsetsum;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends
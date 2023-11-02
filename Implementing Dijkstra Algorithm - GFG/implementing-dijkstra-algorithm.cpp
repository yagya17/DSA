//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    
 
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        int source_node = S;
        set<pair<int,int>>s;  //{dist,node}
        vector<int>dist(V,INT_MAX);
        s.insert({0,source_node});
        dist[source_node]=0;
        while(!s.empty())
        {
            auto curr = *(s.begin());
            int curr_node = curr.second;
            int curr_dist = curr.first;
            s.erase(curr);
            for(auto it: adj[curr_node])
            {
                int adj_node = it[0];
                int edge_weight = it[1];
                if(curr_dist + edge_weight<dist[adj_node])
                {
                    if(dist[adj_node]!=INT_MAX) s.erase({dist[adj_node],adj_node});
                    
                    dist[adj_node]=curr_dist+edge_weight;
                    s.insert({dist[adj_node], adj_node});
                }
            }
        }
        return dist;
    }
};


//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        int S;
        cin>>S;
        
        Solution obj;
    	vector<int> res = obj.dijkstra(V, adj, S);
    	
    	for(int i=0; i<V; i++)
    	    cout<<res[i]<<" ";
    	cout<<endl;
    }

    return 0;
}


// } Driver Code Ends
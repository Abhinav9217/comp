#pragma GCC optimize ("-O3")
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
#define f(i,x,n) for(ll i=x;i<n;i++)
#define pb push_back
#define mp make_pair
#define debug(x) cout<<x<<"\n";
#define lb lower_bound
#define ub upper_bound
#define bs binary_search
#define MOD 1000000007

bool dfs(int n,vector<int>arr[],vector<int>&visited)
{
    visited[n]=1;
    for(int i=0;i<arr[n].size();i++)
    {
        int temp=arr[n][i];
        if(visited[temp]==1)
         return true;
         bool a= dfs(temp,arr,visited);
         if(a==true)
         return true;
          
    }
    visited[n]=0;
    return false;
}
bool isCyclic(int v, vector<int> arr[])
{
    // Your code here
    vector<int>visited(v,0);
    for(int i=0;i<v;i++)
    {
        if(visited[i]==0)
        {
            bool a=dfs(i,arr,visited);
            if(a==true)
            return a;

        }
    }
   return false;    
}

// { Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int v, e;
	    cin >> v >> e;
	    
	    vector<int> adj[v];
	    
	    for(int i =0;i<e;i++){
	        int u, v;
	        cin >> u >> v;
	        adj[u].push_back(v);
	    }
	    
	    cout << isCyclic(v, adj) << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends
	
	
	
	

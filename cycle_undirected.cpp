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

bool dfs(int n,vector<int>arr[],int parent,vector<int>&visited)
{
    visited[n]=1;
    for(int i=0;i<arr[n].size();i++)
    {
        int no=arr[n][i];
        if(visited[no]==0)
        {
            bool a=dfs(no,arr,n,visited);
            if(a==true)
             return a;
        }
        else if(parent!=no)
        return true;
    }
    return false;
}
bool isCyclic(vector<int> arr[], int v)
{
   // Your code here
   vector<int>visited(v,0);
   for(int i=0;i<v;i++)
   {
       if(visited[i]==0)
       {
          bool a= dfs(i,arr,-1,visited);
          if(a==true)
          return a;
       }
   }
   return false;
   
}

// { Driver Code Starts.


int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int V, E;
        cin>>V>>E;
        
        // array of vectors to represent graph
        vector<int> adj[V];
        
        int u, v;
        for(int i=0;i<E;i++)
        {
            cin>>u>>v;
            
            // adding edge to the graph
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        cout << isCyclic(adj, V)<<endl;

    }
}
	
	
	
	
	
	

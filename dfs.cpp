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
int ans=0;
void dfs(int n,vector<vector<int>>&arr,vector<int>&visited)
{
	if(visited[n]==1)
	 return ;
	 visited[n]=1;
	 for(int i=0;i<arr[n].size();i++)
	 {
	 	int temp=arr[n][i];
	 	if(visited[temp]==0)
	 	{
	 		dfs(temp,arr,visited);
		 }
	 }
}
int main()
{
    
    ll t;
    t=1;
    //cin>>t;
    while(t--){ 
      int v,e;
      cin>>v>>e;
      vector<vector<int>>arr(v+1);
      for(int i=0;i<e;i++)
      {
      	int a,b;
      	cin>>a>>b;
      	arr[a].pb(b);
	  }
	  vector<int>visited(v+1,0);
	  for(int i=1;i<=v;i++)
	  {
	  	if(visited[i]==0)
	  	{
	  		ans++;
	  		dfs(i,arr,visited);
		  }
	  }
	  cout<<ans<<endl;
}
}

	
	
	
	
	
	
	
	
	

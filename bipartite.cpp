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
//bipartite graph
// no two adjacent node can have the same color doesnt need to be connected cannot contain odd cycles
bool dfs(int n,vector<vector<int>>&arr,vector<int>&visited,int c,vector<int>&color)
{   
    
	visited[n]=1;
	 color[n]=c;
	 
	 for(int i=0;i<arr[n].size();i++)
	 {
	 	int temp=arr[n][i];
	 	
	    if(visited[temp]==0)
	    {
	    	bool a=dfs(temp,arr,visited,c ^ 1,color);
	    	if(a==false)
	    	 return false;
		}
		else
		{
			if(color[n]==color[temp])
	 	    {
		       return false; 
	        }
		}
	 }
	 return true;
}
int main()
{
    
    ll t;
    t=1;
    cin>>t;
    int cas=1;
    while(t--){
	string s="Scenario";
    int v,e;
    cin>>v;
    cin>>e;
    vector<vector<int>>arr(v+1);
    for(int i=0;i<e;i++)
    {
    	int a,b;
    	cin>>a>>b;
    	arr[a].push_back(b);
    	arr[b].push_back(a);
	}
	  vector<int>visited(v+1,0);
      
        int flag=0;
        vector<int>color(v+1,-1);
      	for(int i=1;i<=v;i++)
      	{    if(visited[i]==0)
      	   {
		  
      		bool a= dfs(i,arr,visited,0,color);
      		if(a==false)
      	 	flag=1;
      	 }
      	}
		  
	  
      if(flag==0)
      {
      	cout<<s<<" "<<'#'<<cas<<':'<<endl;
      	cout<<"No"<<" "<<"suspicious"<<" "<<"bugs"<<" "<<"found!";
	  }
	  else
	  {
	  	cout<<s<<" "<<'#'<<cas<<':'<<endl;
	  	cout<<"Suspicious"<<" "<<"bugs"<<" "<<"found!";
	  	
	  }
	  cout<<endl;
	  cas++;
      
      
}
}

	
	
	
	
	
	
	
	
	

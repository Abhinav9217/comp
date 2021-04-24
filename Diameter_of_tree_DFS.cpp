/*Look at Abhinav man, so Inspirational*/
#pragma GCC optimize ("-O3")
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
//#define f(i,x,n) for(ll i=x;i<n;i++)
#define pb push_back
#define mp make_pair
#define debug(x) cout<<x<<"\n";
#define lb lower_bound
#define ub upper_bound
#define bs binary_search
#define mod 1000000007
#define endl '\n'

ll n,m,k,a,b,c,d,x,y,z,q,e,v;
string s;
vector<vector<int>> arr(100000);
vector<int>visited(100000,0);
ll ans=0;
int temp=0;
/* diamter of tree is the farthest path between any 2 nodes in a tree
 novice approach run dfs n times to calculate farthest mode from every node n^2 approach
 another approach we can calculate  the diameter in 2 dfs runs first take any node and let the farthest node from it be x
 then calulate the distance of the node farthest from x that will be the diameter*/
 void dfs(int n,int m)
 {     
      
 	 if(m>=temp)
 	 {
 	 	temp=m;
 	 	c=n;
	  }
	  visited[n]=1;
	  for(int i=0;i<arr[n].size();i++)
	  {
	  	  b=arr[n][i];
	  	  if(visited[b]==0)
	  	  {
	  	  	  dfs(b,m+1);
			}
	  }
 }
int  main()
{
     ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   //std::cout << fixed<< std::setprecision(9) << '\n';
  
   int  t;
    t=1;
    //cin>>t;
    while(t--)
    {   
      ans=0;
    cin>>v;
    e=v-1;
    c=0;
    for(int i=0;i<e;i++)
    {
    	cin>>a>>b;
    	arr[a].pb(b);
    	arr[b].pb(a);
	}
	dfs(1,0);
	for(int i=0;i<visited.size();i++)
	{
		 visited[i]=0;
	}
	temp=0;
	dfs(c,0);
	cout<<temp<<endl;
  }
} 


	

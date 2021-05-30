// the first dfs call is on original graph this tells us the order in which the second one should be run
// in the scc vector the vertex which have higher outime will come later on 
// look at the video bro
/*Look at Abhinav man, so inspirational*/
#pragma GCC optimize ("-O3")
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
#define forn(i,x,n) for(ll i=x;i<n;i++)
#define pb push_back
#define int             long long
#define mp make_pair
#define debug(x) cout<<x<<"\n";
#define lb lower_bound
#define ub upper_bound
#define bs binary_search
#define mod 1000000007
#define endl '\n'
int n,m,k,a,b,c,d,x,y,z,q,e,v,r;
string s;
 pair<int,int>parent[2000000];
//int arr[1000000];
vector<pair<int,int>>temp;
vector<vector<int>>arr(100);
vector<vector<int>>brr(100);
vector<int>visited(100,0);
vector<int>visi(100,0);
int dp[4000][3];
int ans=0;
vector<int>scc;
vector<int>tb;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
     
}
bool compare(vector<int>a,vector<int>b)
{     
       return a[2]<b[2];
}
void dfs(int i)
{
	visited[i]=1;
	for(int j=0;j<arr[i].size();j++)
	{
		int temp=arr[i][j];
		if(!visited[temp])
		{
			 dfs(temp);
		}
	}
	scc.pb(i);
}
void dfs1(int i)
{
	visi[i]=1;
	for(int j=0;j<brr[i].size();j++)
	{
		int temp=brr[i][j];
		if(!visi[temp])
		{
			 dfs1(temp);
		}
	}
	tb.pb(i);
}
int32_t main()
{
     ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   //std::cout << fixed<< std::setprecision(15);
  
   int  t;
    t=1;
    //cin>>t;
    while(t--)
    {  
      cin>>v>>e;
      for(int i=0;i<e;i++)
      {
      	 cin>>a>>b;
      	 arr[a].pb(b);
      	 brr[b].pb(a);// transpose graph the edges are reversed in this
	  }
	  for(int i=1;i<=v;i++)
	  {
	  	 if(visited[i]==0)
	  	 {
	  	 	dfs(i);
		   }
	  }
	  for(int i=scc.size()-1;i>=0;i--)
	  {       
	         tb.clear();
	  	  if(visi[scc[i]]==0)
	  	  {
	  	  	 dfs1(scc[i]);
			}
			for(int j=0;j<tb.size();j++)
			{
				 cout<<tb[j]<<" ";
			}
			if(tb.size())
			cout<<endl;
	  }
}
}

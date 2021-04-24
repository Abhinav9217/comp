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
// Given 2 nodes find whether one node lies in the subtree of another and you have to answer many queries
// in/ out time is basically when you enter a node during dfs and exit it during dfs
// if some node lies in the subtree of another node then its intime should be greater than the other  node and outime should be less than the other node
ll n,m,k,a,b,c,d,x,y,z,q,v,e;
string s;
ll ans=0;
int timer=1;
vector<int>in(100000,0);
vector<int>out(100000,0);
vector<vector<int>>arr(100000);
vector<int>visited(100000,0);
void dfs(int n)
{
	 visited[n]=1;
	 in[n]=timer++;
	 for(int i=0;i<arr[n].size();i++)
	 {
	 	int temp=arr[n][i];
	 	if(visited[temp]==0)
	 	{
	 		dfs(temp);
		 }
	 }
	 out[n]=timer++;
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
      cin>>v>>e;
	   for(int i=0;i<e;i++)
	   {
	   	  cin>>a>>b;
	   	  arr[a].pb(b);
	   	  arr[b].pb(a);
	   	  
	   }
	    
	    for(int i=0;i<v;i++)
	    {
	    	if(visited[i]==0)
	    	{
	    		dfs(i);
			}
		}
	  
  }
} 



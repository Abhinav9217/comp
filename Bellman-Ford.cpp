/*Look at Abhinav man, so inspirational*/
/* Dont really understand the proof but after n-1 times travelling all edges you will get the single source shortest path time complexity O(VE) the second iteration is
to check for negative cycles if you have negative cycles it will be infinite loop the second iteration checks that*/
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
int n,m,k,a,b,c,d,x,y,z,e,v,r,w;
string s;
int dx[4]={-1, +1, 0, 0};
int dy[4]={0, 0, +1, -1};
bool compare(pair<int,int>a,pair<int,int>b)
{
	 return a.first<b.first;
}
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
     
}
//vector<pair<int,int>>arr[1000000];
struct edge
{
    int a, b, cost;
};
int32_t main()
{
     ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   //std::cout << fixed<< std::setprecision(15);
  
   int  t;
    t=1;
    //cin>>t;
    while(t--)
    {   int INF=-1e18;
	   cin>>v>>e;
	   vector<edge>arr;
	   vector<int>d(v,1e18);
	   for(int i=0;i<e;i++)
	   {
	   	 cin>>a>>b>>c;
	   	 a--;
	   	 b--;
	   	 c=-c;
	   	  arr.pb({a,b,c});
	   }
       d[0]=0;
       for(int i=1;i<v;i++)
       {
       	 for(int j=0;j<e;j++)
       	 {
       	 	  if(d[arr[j].a]!=1e18)
       	 	  {
       	 	  	 d[arr[j].b]=min(d[arr[j].b], d[arr[j].a] + arr[j].cost);
       	 	  	  d[arr[j].b]=max(d[arr[j].b],(INF));
				  }
			}
	   } 
	    for(int i=1;i<v;i++)
       {
       	 for(int j=0;j<e;j++)
       	 {
       	 	  if(d[arr[j].a]!=1e18)
       	 	  {
       	 	  	 d[arr[j].b]=max(INF,d[arr[j].b]);
       	 	  	 if(d[arr[j].a]+arr[j].cost<d[arr[j].b])
       	 	  	 { 
       	 	  	     d[arr[j].b]=INF;
					   }
       	 	  	 
				  }
	}
 }
	   if(d[v-1]!=-1e18)
	   cout<<(-1)*(d[v-1])<<endl;
	   else
	   cout<<-1<<endl;
	   
   }
}

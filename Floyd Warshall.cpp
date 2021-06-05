/*Look at Abhinav man, so inspirational*/
// shortest distance between any 2 node complextiy O(n^3)
// 1e18 means there is no edge between those nodes
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
vector<pair<int,int>>arr[1000000];
int32_t main()
{
     ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   //std::cout << fixed<< std::setprecision(15);
  
   int  t;
    t=1;
    //cin>>t;
    while(t--)
    {  
	   cin>>v>>e>>m;
	   vector<vector<int>>arr(v,vector<int>(v,1e18));
	   for(int i=0;i<v;i++)
	   {
	   	 for(int j=0;j<v;j++)
	   	 {
	   	 	 if(i==j)
	   	 	  arr[i][j]=0;
	   	 	  else
	   	 	  arr[i][j]=1e18;
			}
	   }
	   for(int i=0;i<e;i++)
	   {
	   	 cin>>a>>b>>w;
	   	 a--;
	   	 b--;
	   	 arr[a][b]=min(arr[a][b],w);
	   	 arr[b][a]=min(arr[b][a],w);
	   }
	   for(int k=0;k<v;k++)
	   {
	   	 for(int i=0;i<v;i++)
	   	 {
	   	 	for(int j=0;j<v;j++)
	   	 	{
	   	 		if(arr[i][k]==1e18||arr[j][k]==1e18)
	   	 		{
	   	 			 continue;
					}
					else
					arr[i][j]=min(arr[i][j],arr[i][k]+arr[k][j]);
				}
			}
	   }
	   while(m--)
	   {
	   	 cin>>a>>b;
	   	 a--;
	   	 b--;
	   	 if(arr[a][b]==1e18)
	   	 cout<<-1<<endl;
	   	 else
	   	 cout<<arr[a][b]<<endl;
	   }
    
   }
}

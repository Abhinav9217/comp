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
int n,m,k,a,b,c,d,x,y,z,e,v,r;
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
	   cin>>v>>e;
	   vector<int>ans(v+1,1e18);
	   while(e--)
	   {
	   	 cin>>a>>b>>c;
	   	 arr[a].pb({b,c});
	   }
	   priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>q;
	q.push({0,1});
	ans[1]=0;
    while(q.size()>0)
    {
    	
    	int a=q.top().second;
    	int b=q.top().first;
    	q.pop();
    	if(ans[a]<b)
    	 continue;
    	for(auto e:arr[a])
    	{
    		 int c=e.first;
    		 int d=e.second;
    		 
    		 if(ans[c]>d+b)
    		 {
    		 	 ans[c]=d+b;
				  q.push({ans[c],c});
			 }
			 
		}
	}
	   for(int i=1;i<=v;i++)
	   {
	   	cout<<ans[i]<<" ";
	   }
       
   }
}

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
// in is indgree meaning number of edges towards that node the edges with indegree 1 will obviously appear in the beginning beacuse they have no dependency
 vector<vector<int>>arr(10000);
 vector<int>ans;
 vector<int>in(10000);
 int kahn(int n)
 {
 	queue<int>q;
 	for(int i=1;i<=n;i++)
 	{
 		if(in[i]==0)
 		 q.push(i);
	 }
	 while(q.size()>0)
	 {
	 	int temp=q.front();
	 	q.pop();
	 	ans.pb(temp);
	 	for(int i=0;i<arr[temp].size();i++)
	 	{
	 		in[arr[temp][i]]--;
	 		if(in[arr[temp][i]]==0)
	 		{
	 			q.push(arr[temp][i]);
			 }
		 }
	 }
	 return ans.size()==n;
 }
int main() {
	
	int t;
	t=1;
	//cin >> t;
	
	while(t--){
	   int n,m;
	   cin>>n>>m;
	   while(m--)
	   {
	   	int a,b;
	   	cin>>a>>b;
	   	arr[a].pb(b);
	   	in[b]++;
	   }
	    int a= kahn(n);
	    if(a==1)
	    { 
	       for(int i=0;i<n;i++)
	       {
	       	cout<<ans[i]<<" ";
		   }
		}
		else
		{
			cout<<"IMPOSSIBLE";
		}
	}
	
	return 0;
}  
	
	
	
	
	
	
	
	
	

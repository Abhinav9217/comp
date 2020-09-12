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
int arr[100][100];
int visited[100][100];
int n,m;
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
bool isvalid(int x,int y)
{
	if(x<1||x>n||y<1||y>m)
	{
		return false;
	}
	if(visited[x][y]==1||arr[x][y]==0)
	 return false;
	 
	 
	 return true;
}
void dfs(int x,int y)
{
	visited[x][y]=1;
	for(int i=0;i<4;i++)
	{
		if(isvalid(x+dx[i],y+dy[i]))
		 dfs(x+dx[i],y+dy[i]);
	}
}
int main() {
	
	int t;
	t=1;
	//cin >> t;
	
	while(t--){
	   
	   cin>>n>>m;
	   for(int i=1;i<=n;i++)
	   {
	   	 for(int j=1;j<=m;j++)
	   	 {
	   	     cin>>arr[i][j];	
		 }
	   }
	   int ans=0;
	   for(int i=1;i<=n;i++)
	   {
	   	for(int j=1;j<=m;j++)
	     {
	     	if(visited[i][j]==0&&arr[i][j]==1)
	     	{
	     		ans++;
	     		dfs(i,j);
			 }
		 }
	   }
	   cout<<ans<<endl;
	}
	
	return 0;
}  
	
	
	
	
	
	
	
	
	

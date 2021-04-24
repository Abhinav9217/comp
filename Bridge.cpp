#include<bits/stdc++.h>
#define REP(i,n) for (int i = 1; i <= n; i++)
#define mod 1000000007
#define pb push_back
#define ff first
#define ss second
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define lli long long int
#define INF 1000000000
#define endl '\n'
const double PI = 3.141592653589793238460;
typedef std::complex<double> Complex;
typedef std::valarray<Complex> CArray;

using namespace std;
/* A bridge is defined as an edge which when removed from the graph increases the number of connected components
a backedge can never be a bridge because even if you remove that edge then also the graph is connected
in array basically the intime*/

vector<int> ar[100001];
int in[100001] , low[100001] , vis[100001] , timer;
bool hasBridge;
vector<pair<int,int> > edgeList;

void dfs(int node , int par)
{
	vis[node] = 1;
	in[node] = low[node] = timer++;
	
	for(int child : ar[node])
	{
		if(child == par) continue;
		
		if(vis[child])
		{
			low[node] = min(low[node] , in[child]);
			
		}
		else
		{
			dfs(child , node);
			if(low[child] > in[node])
			{
				hasBridge = true;
				return;
			}
			
			low[node] = min(low[node] , low[child]);
		}
	}
}

int main()
{
//	setTextSize();
	int n , m , a , b;
	cin>>n>>m;
	
	while(m--)
	cin>>a>>b , ar[a].push_back(b) , ar[b].push_back(a);
	
	dfs(1 , -1);
	
	if(hasBridge)
	{
		cout<<0;
	}
	else
	{
		cout<<1;
	}
	
}









	
	
	
	
	
	
	

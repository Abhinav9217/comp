//used to find single source shortest path in a "GRAPH" dfs tree mein kar sakta hai sirf
int vis[N], dist[N]
vector<int> g[N];

void bfs(int k)
{
	queue<int> q;
	q.push(k);
	vis[k]=1;
	while(!q.empty())
	{
		int node=q.front();
		q.pop();
		for(auto it:g[node])
		{
			if(!vis[it])
			{
				dist[it]=dist[node]+1;
				vis[it]=1;
				ways[it]+=ways[node];
				q.push(it);
			}

		}
	}
}
	
	
	
	

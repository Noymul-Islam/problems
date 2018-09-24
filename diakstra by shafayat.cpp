#include<iostream>
#include<cstdio>
#include<algorithm>
#include<queue>
#include<vector>
#include<cmath>
#include<cstring>

using namespace std;



#define mx 100002
vector<long long int>g[mx],cost[mx];
struct node
{
	long long int u,w;
	node(long long int a,long long int b){u=a; w=b;}
	bool operator < ( const node& p ) const {      return w > p.w;   }
};
long long int d[mx],par[mx];
long long int dijkstra(long long int n)
{
	//memset(d,63,sizeof(d));
	for(long long int i=0;i<mx;i++)
	   d[i]=100000000;
	memset(par,-1,sizeof(par));
	priority_queue<node>q;
	q.push(node(1,0));
	d[1]=0;
	while(!q.empty())
	{
		node top=q.top(); q.pop();
		long long int u=top.u;

		if(u==n) return d[n];//this wont work always
		for(long long int i=0;i<(long long int)g[u].size();i++)
		{
			long long int v=g[u][i];
			if(d[u]+cost[u][i]<d[v])
			{
				d[v]=d[u]+cost[u][i];
				par[v]=u;
				q.push(node(v,d[v]));
			}
		}
	}
	return -1;
}
 int main(){
	long long int n,e;
	cin>>n>>e;
	for(long long int i=0;i<e;i++)
	{
		long long int u,v;
		long long int w;
		cin>>u>>v>>w;
		g[u].push_back(v);
		g[v].push_back(u);
		cost[u].push_back(w);
		cost[v].push_back(w);

	}
	long long int ret=dijkstra(n);
	if(ret==-1) printf("-1\n");
	else
	{
		long long int u=n;
		vector<long long int>out;
		while(u!=-1)
		{
			out.push_back(u);

			u=par[u];

		}
		reverse(out.begin(),out.end());
		for(long long int i=0;i<(long long int)out.size();i++)
			cout<<out[i]<<" ";
		puts("");

	}
}

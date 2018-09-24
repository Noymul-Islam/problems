#include<cstdio>
#include<cmath>
#include<iostream>
#include<queue>
#include<algorithm>
#include<cstring>

using namespace std;

vector<int>G[30005],cost[30005];

struct data
{
    int index,amount;

};
data bfs(int source, int n);

bool comp(data p, data q)
{
    return p.amount>q.amount;
}
int main()
{
    int t,n,cs=1;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        memset(cost,0,sizeof(cost));
        for(int i=0; i<n-1; i++)
        {
            int u,v,w;
            cin>>u>>v>>w;
            G[u].push_back(v);
            G[v].push_back(u);
            cost[u].push_back(w);
            cost[v].push_back(w);
            // cost[u][v]=w;
            //cost[v][u]=w;
        }
        data res=bfs(0,n);
        // printf("%d\n",res.amount);

        data res1=bfs(res.index,n);

        printf("Case %d: %d\n",cs++,res1.amount);
        for(int i=0; i<n; i++)
        {

            G[i].clear();
            cost[i].clear();
        }

    }
    return 0;
}

data bfs(int source , int n)
{
    queue<int >q;
    data d[n];
    int taken[n];
    for(int i=0; i<n; i++)
        taken[i]=0;
    taken[source]=1;
    d[source].amount=0;
    d[source].index=source;
    q.push(source);
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int i=0; i<G[u].size(); i++)
        {

            int v=G[u][i];
            if(!taken[v])
            {

                taken[v]=1;
                d[v].amount=d[u].amount+cost[u][i];
                d[v].index=v;
                q.push(v);
            }
        }

    }
    sort(d,d+n,comp);

    return  d[0];

}

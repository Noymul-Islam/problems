#include <bits/stdc++.h>
using namespace std;
int dijkstra(int source ,int dest);
void dfs(int u);
vector<int>edge[10000],cost[10000];
vector<int>out;
struct data
{
    int node,dist;
    bool operator<(const data &p) const
    {

        return dist>p.dist;
    }
};
int table[100][100];
int khoroc[100][100];
int somoy[5];
vector<int>lift[5];
int change;
int parent[100];
int main()
{
    int n,k;
    char ch[500];
    while(scanf("%d %d",&n,&k)==2)
    {
        change=0;
        int compare;
        memset(khoroc,-1,sizeof(khoroc));
        memset(table,-1,sizeof(table));
        for(int i=0; i<100; i++)
            parent[i]=i;
        for(int i=0; i<n; i++)
            scanf("%d",&somoy[i]);

        getchar();
        for(int i=0; i<n; i++)
        {
            int num=0;
            gets(ch);
            for(int j=0; j<strlen(ch); j++)
            {
                if(ch[j]==' ')
                {
                    lift[i].push_back(num);
                    num=0;
                    continue;
                }
                num=num*10+ch[j]-'0';
                if(j==strlen(ch)-1)
                {
                    lift[i].push_back(num);
                    num=0;
                    continue;

                }


            }

        }
        for(int i=0; i<n; i++)
        {
            for(int j=1; j<lift[i].size(); j++)
            {

                edge[lift[i][j-1]].push_back(lift[i][j]);
                edge[lift[i][j]].push_back(lift[i][j-1]);
                cost[lift[i][j-1]].push_back((lift[i][j]-lift[i][j-1])*somoy[i]);
                cost[lift[i][j]].push_back((lift[i][j]-lift[i][j-1])*somoy[i]);
                int cost2=(lift[i][j]-lift[i][j-1])*somoy[i];
                if(khoroc[lift[i][j-1]][lift[i][j]]!=-1&&cost2<khoroc[lift[i][j-1]][lift[i][j]])
                {
                    if(lift[i][j-1]==15&&lift[i][j]==19)


                        khoroc[lift[i][j-1]][lift[i][j]]=cost2;
                    khoroc[lift[i][j]][lift[i][j-1]]=cost2;
                    table[lift[i][j-1]][lift[i][j]]=i;
                    table[lift[i][j]][lift[i][j-1]]=i;

                }
                else if(khoroc[lift[i][j-1]][lift[i][j]]==-1)
                {
                    if(lift[i][j-1]==15&&lift[i][j]==19)

                        khoroc[lift[i][j-1]][lift[i][j]]=cost2;
                    khoroc[lift[i][j]][lift[i][j-1]]=cost2;

                    table[lift[i][j-1]][lift[i][j]]=i;
                    table[lift[i][j]][lift[i][j-1]]=i;
                }

            }

        }
        int res=dijkstra(0,k);
        if(res<0)
            printf("IMPOSSIBLE\n");
        else
        {
            out.push_back(k);
            dfs(k);
            reverse(out.begin(),out.end());

            int compare=table[out[0]][out[1]];

            for(int i=2; i<out.size(); i++)
            {
                if(compare!=table[out[i-1]][out[i]])
                {
                    change++;
                    compare=table[out[i-1]][out[i]];

                }

            }

            printf("%d\n",res+(change*60));
        }

        for(int i=0; i<10000; i++)
        {
            cost[i].clear();
            edge[i].clear();

        }
        for(int i=0; i<5; i++)
            lift[i].clear();
        out.clear();

    }

    return 0;
}

int dijkstra(int source, int dest)
{

    int d[10000];
    for(int i=0; i<10000; i++)
        d[i]=10000000;
    int curent1,temp;
    d[source]=0;

    priority_queue<data>q;
    data u,v;
    u.node=source;
    u.dist=0;
    q.push(u);
    while(!q.empty())
    {


        u=q.top();
        q.pop();




        if(u.node==dest)
            return d[u.node];
        for(int i=0; i<edge[u.node].size(); i++)
        {
            v.node=edge[u.node][i];
            v.dist=cost[u.node][i]+d[u.node];
            if(v.dist<d[v.node])
            {
                parent[v.node]=u.node;
                d[v.node]=v.dist;
                q.push(v);

            }


        }
    }
    return -1;
}
void dfs(int u)
{
    int v=parent[u];
    if(v==parent[v])
    {

        out.push_back(v);
        return;
    }

    out.push_back(v);
    dfs(v);


}

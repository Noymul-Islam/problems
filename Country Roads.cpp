#include<cstdio>
#include<cstring>
#include<algorithm>
#include<queue>
#include<vector>
#include<stack>
using namespace std;
struct edge
{
    int u,v,w;
    bool operator  <(const edge &p) const
    {
        return w<p.w;
    }
};
vector<edge>e;
vector<int>g[520];
stack<int>st;
int par[20000],cost[520][520],color[520],flag;


int n,m,t,u,v,w,taka=-50;
int find(int r)
{
    return (par[r]==r)? r : find(par[r]);

}
void mst(int n)
{
    sort(e.begin(),e.end());
    for(int i=0; i<=n; i++)
        par[i]=i;
    int count=0;
    for(int i=0; i<(int)e.size(); i++)
    {
        u=find(e[i].u);
        v=find(e[i].v);
        if(u!=v)
        {
            par[u]=v;
            count++;
            g[e[i].u].push_back(e[i].v);
            g[e[i].v].push_back(e[i].u);
            cost[e[i].u][e[i].v]=e[i].w;
            cost[e[i].v][e[i].u]=e[i].w;
            // printf("---> %d %d Cost: %d\n",e[i].u,e[i].v,e[i].w);

        }
        if(count==n-1)
            return ;

    }


}

void dfs(int i, int t)
{
   // printf("%d %d\n",i,t);
    if(color[i])
        return;
    color[i]=1;
    if(i==t)
    {
        int mark=-100;
        flag=1;
        while(!st.empty())
        {
            // printf("dsdsds");
            int res=st.top();
            st.pop();
            if(res>mark)
                mark=res;
            //printf("%d\n",res);
        }
        printf("%d\n",mark);
        return ;
    }

    for(int j=0; j<g[i].size(); j++)
    {


        int  res=cost[i][g[i][j]];

        st.push(res);
        dfs(g[i][j],t);
        if(!st.empty())
         st.pop();
       // printf("ok\n");

    }


}


int main()
{
    int cases;
    scanf("%d",&cases);
    for(int i=1; i<=cases; i++)
    {

        scanf("%d %d",&n,&m);
        for(int j=0; j<n; j++)
            for (int k=0; k<n; k++)
            {
                cost[j][k]=-50000000;
                if(j==k)
                    cost[j][k]=0;

            }
        for(int j=1; j<=m; j++)
        {
            scanf("%d %d %d",&u,&v,&w);
            edge get;
            get.u=u;
            get.v=v;
            get.w=w;
            e.push_back(get);

        }
        scanf("%d",&t);
        mst(n);
        printf("Case %d:\n",i);

        for(int j=0; j<n; j++)
        {
            for(int k=0; k<520; k++)
                color[k]=0;
            while(!st.empty())
                st.pop();
            flag=0;
            if(j==t)
                printf("0\n");

            else
            {

                dfs(j,t);


            if(!flag)
                printf("Impossible\n");
            }
        }

        for(int i=0; i<520; i++)
            g[i].clear();
        e.clear();
//        st.clear();

    }



    return 0;
}
/*
1

11 15
0 1 15587
0 6 3710
1 2 1330
1 9 8736
1 10 593
2 4 17684
3 6 1275
3 10 10190
5 9 9694
6 10 13122
8 9 3083
8 10 722
9 0 11153
9 7 17616
10 0 15986
8
*/

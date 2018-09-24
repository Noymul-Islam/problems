#include<cstdio>
#include<cstring>
#include<algorithm>
#include<vector>
#include<iostream>
#include<map>

using namespace std;

void mst(int n);
void dfs(int z);
int k=0,p=0,c=1000000;
int find(int r);
int par[10000];
int color[205];
int q;
struct edge
{
    int u,v,w;
    bool operator< (const edge&p) const
    {
        return w>p.w;

    }

};
vector<int>g[205];
vector<int>cost[205];
vector<edge>e;

int main()
{
    map<string,int>mp;
    int node, ed,t=0;
    int x=1;
    while(scanf("%d %d",&node,&ed)==2)
    {
        q=0;

        memset(color,0,sizeof(color));
        c=1000000;
        //scanf("%d %d",&node,&ed)
        if(node==0&&ed==0)
        {
            //printf("\n");
            break;
        }
        int assign=1;
        for(int i=0; i<ed; i++)
        {
            int w;
            char ch[100],ch1[100];
            cin>>ch>>ch1>>w;

            if(mp.find(ch)==mp.end())
            {
                mp[ch]=assign++;

            }
            if(mp.find(ch1)==mp.end())
            {
                mp[ch1]=assign++;

            }
            edge get;
            get.u=mp[ch];
            get.v=mp[ch1];
            get.w=w;
            e.push_back(get);

        }
        char s[35],s1[35];
        cin>>s>>s1;
        mst(node);

        k=mp[s1];
        p=mp[s];
        color[p]=1;
        dfs(p);
        printf("Scenario #%d\n%d tons\n\n",x++,c);

        for(int i=0; i<205; i++)
        {
            cost[i].clear();
            g[i].clear();
        }
        e.clear();
        mp.clear();
        //printf("1\n");

    }
    return 0;
}
void dfs(int z)
{


    if(z==k)
    {
        //printf("Scenario #%d\n%d tons\n\n",x++,c);
        q=1;
        return;
    }


    //else
    //{


    for(int i=0; i<g[z].size(); i++)
    {
//printf("1\n");

        if(color[g[z][i]]==0)
        {


            if(cost[z][i]<c)
                {
                    c=cost[z][i];
                   // printf("bbbbb%d\n",c);
                    }
            //printf("%d\n",c);
            color[g[z][i]]=1;
            dfs(g[z][i]);
            if(q==1)
        return ;
            //return;}


        }
    }
    if(q==1)
        return ;
    c=1000000;

//    printf("aaaaaa%d\n",c);

//}
    return;
}
void mst(int n)
{
    for(int i=0; i<10000; i++)
        par[i]=i;
    int count=0;
    sort(e.begin(),e.end());
    for(int i=0; i<(int)e.size(); i++)
    {
        int u=find(e[i].u);
        int v=find(e[i].v);
        if(u!=v)
        {

            g[u].push_back(v);
            g[v].push_back(u);
            cost[u].push_back(e[i].w);
            cost[v].push_back(e[i].w);
            par[find(v)]=find(u);
            count++;
            if(count==n-1)
                break;
        }


    }
//printf("1\n");

}
int  find(int r)
{
    if(par[r]==r)
        return r;
    else
        return par[r]=find(par[r]);


}
/*
4 3
D C 50
C M 200
M K 100
C K
*/

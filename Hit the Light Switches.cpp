#include<cstdio>
#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<cstring>
using namespace std;

vector<int>G[10005];
int color[10005];
int arr[10005];
int ind,number;
int count;
struct node
{
    int pos;
    int indegree;

};
bool comp(node p , node q)
{

    return p.indegree<q.indegree;
}
void dfs(int node)
{
    if(color[node])
        return;
    color[node]=1;
    int flag=0;
    for(int j=0; j<G[node].size(); j++)
    {
        int v=G[node][j];
        for(int i=0; i<ind; i++)
        {
            if(arr[i]==v)
            {
                number--;
                flag=1;

                break;

            }
        }
        if(!flag)
            dfs(v);
        flag=0;

    }

}
int main()
{
    int t, cs=1,n,m;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&m);
        memset(color,0,sizeof(color));
        node data[n];
        number=0;
        ind=0;
        for(int i=0; i<n; i++)
        {
            data[i].pos=i+1;
            data[i].indegree=0;
        }

        for(int i=0; i<m; i++)
        {
            int a ,b;
            scanf("%d %d",&a,&b);
            G[a].push_back(b);
            data[b-1].indegree++;


        }
        sort(data,data+n,comp);
        for(int i=0; i<n; i++)
        {
            if(!color[data[i].pos])
            {
                number++;
                dfs(data[i].pos);
                arr[ind++]=data[i].pos;

            }


        }
        printf("Case %d: %d\n",cs++,number);
        for(int i=0; i<10005; i++)
            G[i].clear();
    }

    return 0;
}

#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int d[1010],edge_u[2010],edge_v[2010],cost[2010];
    int t;
    cin>>t;
    while(t--)
    {
        int node,edge;
        scanf("%d %d",&node,&edge);
        for(int i=0;i<=node;i++)
               d[i]=10000000;
               d[0]=0;
        for(int i=0;i<edge;i++)
        {
            cin>>edge_u[i]>>edge_v[i]>>cost[i];

        }
        int neg=false;
        for(int step=0;step<node;step++)
        {
            int update=false;
            for(int i=0;i<edge;i++)
            {
                int u=edge_u[i];
                int v=edge_v[i];
                if(d[u]+cost[i]<d[v])
                {
                    update=true;
                    d[v]=d[u]+cost[i];
                    if(step==node-1)
                        neg=true;

                }
               // if(update==false)
                 //      break;

            }
            if(update==false)
                break;
        }
        if(neg==true)
            printf("possible\n");
        else
            printf("not possible\n");

    }
    return 0;
}

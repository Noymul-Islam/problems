#include<cstdio>
#include<cstring>
#include<cmath>
#include<iostream>
#include<vector>
#include<queue>

using namespace std;
void topsort(int n);
vector<int>G[1000],v;
int degree[1000];
int n,m;
int main()
{
    while(scanf("%d %d",&n,&m)==2)
    {

        if(n==0&&m==0)
               break;
        for(int i=1;i<=n;i++)
               degree[i]=0;
        while(m--)
        {
            int x,y;
            cin>>x>>y;
            G[x].push_back(y);
            degree[y]++;


        }
        for(int i=1;i<=n;i++)
        {//printf("ok");

            if(!degree[i])
            {

                v.push_back(i);
                topsort(i);


            }
        }

        if(v.size()!=n)
               printf("IMPOSSIBLE\n");
        else
        {
            for(int i=0;i<v.size();i++)
            {
            printf("%d\n",v[i]);


            }

        }
        v.clear();
        for(int i=0;i<=n;i++)
              G[i].clear();

    }

    return 0;
}

void topsort(int n)
{
//printf("ok");
    degree[n]--;

    for(int j=0;j<G[n].size();j++)
    {

        int i=G[n][i];
        degree[i]--;
        if(!degree[i])
        {

            v.push_back(i);
            topsort(i);
        }
    }
    return ;
}


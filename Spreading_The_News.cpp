#include<cstdio>
#include<vector>
#include<queue>
#include<cstring>
#include<iostream>
#include<algorithm>

using namespace std;

vector<int>G[3000];
void bfs(int source);
  int dist[3000];
struct data
{
    int number,level;
}a;
int e;
 int n;
int main()
{

    cin>>e;
    for(int i=0;i<e;i++)
    {

        cin>>n;
        while(n--)
        {
            int u;
            cin>>u;
            G[i].push_back(u);

        }

    }
    int t;
    cin>>t;
    while(t--)
    {
        a.number=-1;
        a.level=-1;
           int source;
           cin>>source;
           bfs(source);
           sort(dist,dist+e);
            for(int i=0;i<e;i++)
            {int count=0;
                if(dist[i]>0)
                {
                    count=1;
                    for(int j=i+1;j<e;j++)
                    {
                        if(dist[i]==dist[j])
                        {
                            dist[j]=-1;
                            count++;
                        }
                    }}
                    if(count>a.number)
                    {
                        a.number=count;
                        a.level=dist[i];
                    }



            }
            if(a.level==0)
                  printf("0\n");
            else
                 printf("%d %d\n",a.number,a.level);

    }

    return 0;
}
void bfs(int source)
{
   queue<int>q;
   int taken[e];
    memset(taken,0,sizeof(taken));
    taken[source]=1;
     memset(dist,0,sizeof(dist));
  //  a.number=G[source].size();
    //a.level=1;
    dist[source]=0;
    q.push(source);
   // int sum=0,c=a.number;
    while(!q.empty())
    {

        int u=q.front();
        for(int i=0;i<G[u].size();i++)
        {
            int v=G[u][i];
            if(!taken[v])
            {
                taken[v]=1;
                dist[v]=dist[u]+1;
                q.push(v);

            }

        }
        q.pop();
    }


}

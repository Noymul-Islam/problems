#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<map>
#include<queue>
#include<vector>
using namespace std;
char ch[10000][100];

int bfs(int source,int dest);
vector<int>vc;
int par[10000];
int v,u;
vector<int>G[10000];
int main()
{
    map<string,int>mp;
    int t;
    //scanf("%d",&t);
     int c=0;
    while(scanf("%d",&t)==1)
    {
        if(c)
             printf("\n");
        c=1;


         int count =1;
        memset(par,-1,sizeof(par));
        char s[1000],s1[1000];
        for(int i=0;i<t;i++)
        {
            scanf("%s %s",s,s1);
        if(mp.find(s)==mp.end())
        {
            mp[s]=count;
            strcpy(ch[count],s);
            count++;

        }
        if(mp.find(s1)==mp.end())
        {
            mp[s1]=count;
            strcpy(ch[count],s1);
            count++;
        }
        G[mp[s]].push_back(mp[s1]);
        G[mp[s1]].push_back(mp[s]);
        }
        char s2[1000],s3[1000];
        scanf("%s %s",s2,s3);
        int  res=bfs(mp[s2],mp[s3]);
        if(res==-1)
            printf("No route\n");
        else
        {
         vc.push_back(v);
         while(1)
         {
             v=par[v];
             if(v==-1)
                  break;
             vc.push_back(v);

         }
         reverse(vc.begin(),vc.end());
         for(int i=1;i<vc.size();i++)
         {
             printf("%s %s\n",ch[vc[i-1]],ch[vc[i]]);

         }

        }
        mp.clear();
        for(int i=0;i<10000;i++)
             G[i].clear();
        vc.clear();

    }
    return 0;

}
int bfs(int source, int dest)
{
    queue<int>q;
    int taken[10000];
    memset(taken,0,sizeof(taken));
    taken[source]=1;
    q.push(source);
    while(!q.empty())
    {
         u=q.front();
        q.pop();

        for(int i=0;i<G[u].size();i++)
        {
             v=G[u][i];
            if(!taken[v])
            {
                taken[v]=1;
                q.push(v);
                par[v]=u;
                if(v==dest)
                    return 1;

            }

        }
    }

    return -1;
}

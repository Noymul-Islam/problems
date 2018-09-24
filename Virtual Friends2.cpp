#include<cstdio>
#include<cstring>
#include<cmath>
#include<map>
#include<iostream>
using namespace std;
void un_ion(int a, int b);
int fin_d(int r);
int parent[100001],dist[100001];
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        //memset(parent,0,sizeof(parent));
        memset(dist,1,sizeof(dist));
        for(int i=0;i<100001;i++)
                     parent[i]=i;
        int  mark=1;
        map<string,int>mp;
         int frnd;
        scanf("%d",&frnd);
        for(int i=1;i<=frnd;i++)
        {
            char s1[100], s2[100];
            scanf("%s %s",s1,s2);
            if(mp.find(s1)==mp.end())
            {
                mp[s1]=mark++;

            }
            if(mp.find(s2)==mp.end())
                 mp[s2]=mark++;

            int u=mp[s1];
            int v=mp[s2];
            un_ion(u,v);
            printf("%d\n",dist[u]);

        }

    }

    return 0;
}
void un_ion(int a, int b)
{
    if(fin_d(a)!=fin_d(b))
    {
       if(parent[a]!=a&&parent[b]!=b&&parent[a]!=parent[b])
       {
           dist[parent[a]]=  dist[parent[a]]+dist[parent[b]];
           parent[a]=parent[fin_d(b)];
       }


    }


}
int fin_d(int r)
{

    if(parent[r]==r)
         return r;
    else
         return (parent[r]==fin_d(parent[r]));
 }

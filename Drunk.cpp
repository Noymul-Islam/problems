#include<cstdio>
#include<cstring>
#include<map>
#include<vector>
#include<iostream>
using namespace std;
vector<int>G[10000];
map<string,int>mp;
int color[10000];
int indegree[10000],flag;

void topsort(int node)
{
   //indegree[node]=-1;
   for(int j=0;j<G[node].size();j++)
   {
       int i=G[node][j];
      // printf("-->%d\n",i);
       //indegree[i]--;
       if(color[i])
         {
             flag=1;
             return;
         }
      // if(!indegree[i])
       //{
           color[i]=1;
           topsort(i);

       //}

   }
   color[node]=0;


}
int main()
{
    int t,m,cs=1;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&m);
        getchar();
        int count = 0;
        flag=0;
        memset(color,0,sizeof(color));
        memset(indegree,0,sizeof(indegree));
        while(m--)
        {
           string s1,s2;
           cin>>s1>>s2;
           if(mp.find(s1)==mp.end())
                mp[s1]=count++;
           if(mp.find(s2)==mp.end())
                mp[s2]=count++;
            G[mp[s1]].push_back(mp[s2]);
            indegree[mp[s2]]++;

        }
     for(int i=0;i<count;i++)
     {
        // if(!indegree[i])
         //{
         if(!color[i])
           {

             color[i]=1;
             topsort(i);
             if(flag)
              break;
           }
         //}

     }
     if(flag)
       printf("Case %d: No\n",cs++);
       else
       printf("Case %d: Yes\n",cs++);
       mp.clear();
       for(int i=0;i<count;i++)
          G[i].clear();

    }

    return 0;
}

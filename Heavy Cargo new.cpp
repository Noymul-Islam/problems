#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<map>

using namespace std;
#define inf 999999
 int dfs(int source);
int graph[205][205];
int next[205][205],compare,dest;
int main()
{
    int n,m,cases=1;;
      while(scanf("%d %d",&n,&m)==2)

      {
          if(n==0&&m==0)
             break;

         compare=999999;
      for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
         {
             if(i==j)
               graph[i][j]=0;
                else
                 graph[i][j]=inf;
                   next[i][j]=j;
         }
         map<string,int>mp;
         int count =1,w;
           char ch[500],ch1[500];
         for(int i=0;i<m;i++ )
         {
             scanf(" %s %s %d",ch,ch1,&w);
             //puts(ch);
             //puts(ch1);
             if(mp.find(ch)==mp.end())
                mp[ch]=count++;

             if(mp.find(ch1)==mp.end())
               mp[ch1]=count++;

               if(graph[mp[ch]][mp[ch1]]>w)
               {

                graph[mp[ch]][mp[ch1]]=w;
                   graph[mp[ch1]][mp[ch]]=w;
                }

         }
         for(int k=1;k<=n;k++)
         {

          for(int i=1;i<=n;i++)
          {


              for(int j=1;j<=n;j++)
              {
               if(i==j)
                continue;
                  if((graph[i][j]<graph[i][k]+graph[k][j]))
                  {

                      graph[i][j]=graph[i][k]+graph[k][j];

                      next[i][j]=next[i][k];

                  }

              }
          }}


          char s[100],s1[100];
          scanf("%s %s",s,s1);
          printf("%d %d\n",mp[s1],mp[s]);

       dest =mp[s1];
        int source=mp[s];
        int res=dfs(source);
        printf("Scenario #%d\n%d tons\n",cases++,res);
        mp.clear();
}
    return 0;
}
int dfs(int source)
{
    //printf("1");
    if(next[source][dest]==dest)
    {
        if(graph[source][dest]<compare)
            compare=graph[source][dest];

            return compare;


    }

    int p=next[source][dest];

    if(graph[source][p]<compare)
        compare=graph[source][p];
        dfs(p);
}

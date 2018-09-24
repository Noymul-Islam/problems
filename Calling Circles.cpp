#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<vector>
#include<iostream>
#include<map>
#include<stack>
using namespace std;

struct data
{
    int time,pos;

};
data timing[30];
bool comp(data p, data q)
{
    return p.time>q.time;
}
char s[100][100];
vector<int>edge[30],revedge[30];
int cs=1;
stack<int>st;
int num,sum,ss;
int color[30];
void dfs(int u);
 void scc(int u);
 map<string,int>mp;
  int n,m;
 int main()
 {
     int c=0;
     while(scanf("%d %d",&n,&m)==2)
     { getchar();
         if(n==0&&m==0)
               break;
               if(c)
                printf("\n");
               c=1;
         ss=0,sum=0,num=0;
         char ch[25],ch1[25];
         while(m--)
         {
             cin>>ch>>ch1;
             if(mp.find(ch)==mp.end())
             {
                 mp[ch]=num;
                 strcpy(s[num],ch);
                 num++;


             }
             if(mp.find(ch1)==mp.end())
             {
                 mp[ch1]=num;
                 strcpy(s[num],ch1);
                 num++;
             }

             edge[mp[ch]].push_back(mp[ch1]);
             revedge[mp[ch1]].push_back(mp[ch]);
         }
         for(int i=0;i<n;i++)
              timing[i].pos=i;
         memset(color,0,sizeof(color));
         for(int i=0;i<n;i++)
         {
             if(!color[i])
             {
                 color[i]=1;

                 dfs(i);
             }

         }
         memset(color,0,sizeof(color));
         sort(timing,timing+n,comp);
         printf("Calling circles for data set %d:\n",cs++);
         for(int i=0;i<n;i++)
         {
             if(!color[timing[i].pos])
             {

                 color[timing[i].pos]=1;
                 scc(timing[i].pos);
                 st.push(timing[i].pos);
                 int p=0;
                 while(!st.empty())
                 {
                     int x=st.top();
                     st.pop();
                     if(!p)
                     {
                         p++;
                         printf("%s",s[x]);
                     }
                     else
                     {
                         printf(", %s",s[x]);

                     }

                 }
                 printf("\n");
             }

         }
         for(int i=0;i<=n;i++)
         {
             edge[i].clear();
             revedge[i].clear();
         }
         mp.clear();

     }
     return 0;
 }
 void dfs(int u)
 {
     ++sum;
     for(int i=0;i<edge[u].size();i++)
     {

         int v=edge[u][i];
         if(!color[v])
         {
             color[v]=1;
             dfs(v);

         }
     }
     timing[u].time=++sum;
 }
 void scc(int u)
 {
     for(int i=0;i<revedge[u].size();i++)
     {
         int v=revedge[u][i];
         if(!color[v])
         {
             color[v]=1;
             st.push(v);
             scc(v);

         }

     }

 }

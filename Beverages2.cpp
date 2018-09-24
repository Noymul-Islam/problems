#include<cstdio>
#include<cmath>
#include<cstring>
#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;

vector<int>G[110];

//struct data{
  // int node,indegree;
int  degree[110];;
int n,m,coun;
void topsort(int n);
char ch[110][55];
map<string,int>mp;

int main()
{
     int cs=1;

    while(scanf("%d",&n)==1)
    {
        getchar();
        int num=0;
    coun=0;
    memset(degree,0,sizeof(degree));
    char ch1[110];
    for(int i=0;i<n;i++)
        {
            gets(ch1);
            if(mp.find(ch1)==mp.end())
            {
                mp[ch1]=++num;

            }
            strcpy(ch[num],ch1);
            //degree[num].node=num;
        }
        cin>>m;
        getchar();
        while(m--)
        {
            char ch2[110],ch3[110];
            cin>>ch2>>ch3;
             G[mp[ch2]].push_back(mp[ch3]);
            degree[mp[ch3]]++;

        }
        int x=0;
        printf("Case #%d: Dilbert should drink beverages in this order:",cs++);
        for(int i=1;i<=n;i++)
        {
             if(x==n)
                      break;
            if(!degree[i])
            {
                printf(" %s",ch[i]);
                x++;
                degree[i]--;
                topsort(i);
                i=0;

            }
            //printf("c");
        }
        printf(".\n\n");
        //for(int i=1;i<=n;i++)
          //    printf("%d\n",degree[i]);
          for(int k=0;k<=n;k++)
               G[k].clear();
                mp.clear();

    }

    return 0;
}
void topsort(int n)
{

    for(int j=0;j<G[n].size();j++)
    {
        int i=G[n][j];
        degree[i]--;

    }
    return ;
}

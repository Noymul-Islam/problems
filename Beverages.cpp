#include<cstdio>
#include<cmath>
#include<cstring>
#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;

vector<int>G[110];

struct data{
   int node,indegree;
} degree[110];;
int n,m,coun;
bool comp(data p , data q)
{
    return p.indegree<q.indegree;

}

void topsort(int k,int n);
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
         //memset(degree,0,sizeof(degree));
         for(int i=1;i<=n;i++)
            degree[i].indegree=0;
            degree[0].indegree=-100;
        char ch1[110];
        for(int i=0;i<n;i++)
        {
            gets(ch1);
            if(mp.find(ch1)==mp.end())
            {
                mp[ch1]=++num;

            }
            strcpy(ch[num],ch1);
            degree[num].node=num;
        }
        cin>>m;
        getchar();
        while(m--)
        {
            char ch2[110],ch3[110];
            cin>>ch2>>ch3;
            G[mp[ch2]].push_back(mp[ch3]);
            degree[mp[ch3]].indegree++;


        }
        int x=0;
       // for(int i=1;i<=n;i++)
         //   printf("%d\n",degree[i].indegree);
        sort(degree,degree+n+1,comp);
        for(int i=1;i<=n;i++)
             printf("%d\n",degree[i].indegree);
          //  printf("%d",degree[1].indegree);
        printf("Case #%d: Dilbert should drink beverages in this order:",cs++);
        for(int i=1;i<=n;i++)
        {
            //printf("1");
            printf("%d\n",degree[i].indegree);
            if(!degree[i].indegree)
            {
                //printf("->11");
                //coun++;
               // degree[i].indegree--;
                printf(" %s",ch[degree[i].node]);
              //  x++;
                topsort(i,degree[i].node);
                //if(x==n)
                  //     break;
            }
           // i=1;
            //printf("np");

        }
       // for(int i=1;i<=n;i++)
         //    printf("%d\n",degree[i].indegree);
        printf(".\n\n");
        mp.clear();
        for(int i=1;i<=n;i++)
             G[i].clear();

    }

    return 0;
}

void topsort(int k,int n)
{
    degree[k].indegree--;
    //if(coun==1)
        //printf("%s",ch[n]);
      //  else
        //    printf(" %s",ch[n]);
        int p=degree[k].node;

        for(int j=0;j<G[p].size();j++)
        {
           // printf("1");
            int i=G[p][j];
            //printf("-->%d\n",i);
            for(int z=1;z<=n;z++)
            {

            if(degree[z].node==i)
            {degree[z].indegree--;
                     break;
            }}
          //  if(!degree[i])
            //{
                //printf("1");
              //  coun++;
                //topsort(i);
                    //coun++;
            //}

        }

return;
}

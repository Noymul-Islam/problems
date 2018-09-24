#include<cstdio>
#include<iostream>
#include<cstring>
#include<map>
#include<queue>
#include<vector>
#include<cstring>
using namespace std;
  vector<int>G[35];
void bfs( int amount ,int node,int start,int dest);

int main()
{
    int cases,follow,m,n,p,amount,z=1,assign;

    map<string,int>mymap;
    while(scanf("%d",&cases)==1)
    {
         printf("SHIPPING ROUTES OUTPUT\n\n");
       for(follow=1;follow<=cases;follow++)
        {
       // map<string,int>maymap;

        assign=1;
              scanf("%d %d %d",&m,&n,&p);
              getchar();
             for(int i=0;i<m;i++)
             {
                  char ch[3];
                 scanf("%s",ch);

             }
             for(int i=0;i<n;i++)
             {
                 char ch1[3],ch2[3];
                 scanf("%s %s",ch1,ch2);
                  if(mymap.find(ch1)==mymap.end())
                     mymap[ch1]=assign++;

                     if(mymap.find(ch2)==mymap.end())
                       mymap[ch2]=assign++;

                       G[mymap[ch1]].push_back(mymap[ch2]);
                         G[mymap[ch2]].push_back(mymap[ch1]);
             }

             printf("DATA SET  %d\n\n",z++);

             for(int i=0;i<p;i++)
             {
                 char ch4[3],ch5[3];

                  scanf("%d %s %s",&amount,ch4,ch5);
                  if(mymap.find(ch4)==mymap.end())
                       mymap[ch4]=assign++;
                        if(mymap.find(ch5)==mymap.end())
                           mymap[ch5]=assign++;
                           bfs(amount,assign-1,mymap[ch4],mymap[ch5]);


             }
             for(int i=0;i<35;i++)
              G[i].clear();
              mymap.clear();
         printf("\n");
}
  printf("END OF OUTPUT\n");

        }
    return 0;

}

 void bfs(int amount, int node, int start, int dest)
 {
     queue<int>Q;
     Q.push(start);
      int distance[35]={0};
       int taken[35]={0};
     taken[start]=1;
      distance[start]=0;
      while(!Q.empty())
      {
          int u=Q.front();
          for(int i=0;i<G[u].size();i++)
          {

              int v=G[u][i];
              if(!taken[v])
              {
                  distance[v]=distance[u]+1;
                   taken[v]=1;
                    Q.push(v);

              }
          }
          Q.pop();
      }
      int k= distance[dest];

     int res= amount*100*k;
     if(res==0)
        printf("NO SHIPMENT POSSIBLE\n");
        else
         printf("$%d\n",res);

 }

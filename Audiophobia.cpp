#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
 void floyed();
  int node,edge,q,cs=1;
  int ar[110][110],c=0;
int main()
{


    while(scanf("%d %d %d",&node,&edge,&q)==3)
    {


        if(node==0&&edge==0&&q==0)
              break;

              for(int i=1;i<=node;i++)
                 {

                     for(int j=1;j<=node;j++)
                     {

                         ar[i][j]=10000000;
                         if(i==j)
                             ar[i][j]=0;
                     }//
                 }


              for(int i=0;i<edge;i++)
              {

                  int u,v,w;
                  cin>>u>>v>>w;
                  if(ar[u][v]>w)
                  {
                      ar[u][v]=w;
                      ar[v][u]=w;

                  }}

                  floyed();
                   if(c)
                  printf("\n");
              c=1;
         printf("Case #%d\n",cs++);
                  while(q--)
                  {
                      int u,v;
                      cin>>u>>v;

                      if(ar[u][v]==10000000)
                         printf("no path\n");
                      else
                         printf("%d\n",ar[u][v]);


                  }


    }

    return 0;
}
void floyed()
{
    for(int k=1;k<=node;k++)
    {
        for(int i=1;i<=node;i++)
        {

            for(int j=1;j<=node;j++)
            {
                ar[i][j]=min(ar[i][j],max(ar[i][k],ar[k][j]));

            }
        }
    }


}

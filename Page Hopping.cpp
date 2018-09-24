#include<cstdio>
#include<iostream>
#include<cmath>
#include<map>

using namespace std;
#define inf 999999999
int graph[105][105];

int main()
{
     int cases=1;
     int c=0,k=0;
     while(1)
     {
         map<int,int>mp;
         for(int i=0;i<105;i++)
          {

              for(int j=0;j<105;j++)
              {
                  if(i==j)
                      graph[i][j]=0;
                      else
                      {

                          graph[i][j]=inf;
                          graph[j][i]=inf;
                      }
              }
          }
       // c=0,k=0;
       int a,b;
        int count =1;
       while(scanf("%d %d",&a,&b)==2)
       {
           if(a==0&&b==0)
           {
               c++;
               if(c==2)
               {
                   k++;
                   break;
               }
                 break;
           }
            //if(c==1)

               c=0;
               if(mp.find(a)==mp.end())
                  mp[a]=count++;
                  if(mp.find(b)==mp.end())
                    mp[b]=count++;

         graph[mp[a]][mp[b]]=1;


       }
       if(k==1)
         break;


           for(int m=1;m<count;m++)
           {


           for(int i=1;i<count;i++)
            for(int j=1;j<count;j++)
            {




                if(graph[i][j]>graph[i][m]+graph[m][j])
                {
                    graph[i][j]=graph[i][m]+graph[m][j];

                }


            }
           }

        double res;
         int sum=0;
        for(int i=1;i<count;i++)
         for(int j=1;j<count;j++)
         {
             if(graph[i][j]==inf)
                continue;
                sum=sum+graph[i][j];

         }
         //printf("%d\n",sum);
         res=(double)sum/((count-1)*(count-2));
         printf("Case %d: average length between pages = %0.3lf clicks\n",cases++,res);

     }
    return 0;
}

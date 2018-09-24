#include<cstdio>
#include<iostream>
#include<cmath>
#include<cstring>
#include<vector>

using namespace std;

void floyed();

 double ar[210][210];
int n;
int main()
{
     int cs=1;
     while(scanf("%d",&n)==1&&n!=0)
     {
         memset(ar,0,sizeof(ar));
          int co[n+1][2];
         for(int i=1;i<=n;i++)
         {
           scanf("%d %d",&co[i][0],&co[i][1]);


         }
         for(int i=1;i<n;i++)
         {

             for(int j=i+1;j<=n;j++)
             {
                 double dist=sqrtf(((co[i][0]-co[j][0])*(co[i][0]-co[j][0]))+((co[i][1]-co[j][1])*(co[i][1]-co[j][1])));
                 ar[i][j]=dist;
                 ar[j][i]=dist;

             }
         }
        // printf("%lf\n",ar[1][2]);
         floyed();
         printf("Scenario #%d\n",cs++);
         printf("Frog Distance = %0.3lf\n\n",ar[1][2]);

     }


    return 0;
}

void floyed()
{
    for(int k=1;k<=n;k++)
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                ar[i][j]=min(ar[i][j],max(ar[i][k],ar[k][j]));

            }
        }
    }

}

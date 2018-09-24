#include<cstdio>
#include<cmath>
#include<iostream>

using namespace std;
double ar[120][120];
int main()
{
    int t,cs=1;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        double co[n][2];
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=n;j++)
                  {ar[i][j]=10000000;

                   if(i==j)
                      ar[i][j]=0;
                  }
        }
       for(int i=1;i<=n;i++)
       {
           cin>>co[i][0]>>co[i][1];

       }
       for(int i=1;i<n;i++)
       {
           for(int j=i+1;j<=n;j++)
           {
               double dest=sqrtf(((co[i][0]-co[j][0])*(co[i][0]-co[j][0]))+((co[i][1]-co[j][1])*(co[i][1]-co[j][1])));
                 ar[i][j]=dest;
                 ar[j][i]=dest;
                 if(dest>10)
                 {

                     ar[i][j]=10000000;
                     ar[j][i]=10000000;
                 }
                 //printf("%lf\n",dest);
           }
       }

       for(int k=1;k<=n;k++)
       {
           for(int i=1;i<=n;i++)
           {
               for(int j=1;j<=n;j++)
               {
                   if(ar[i][j]>ar[i][k]+ar[k][j])
                      ar[i][j]=ar[i][k]+ar[k][j];
               }
           }
       }



     int c=0;
     double sum=-1;
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(ar[i][j]>=10000000)
            {
                c++;
                  break;
            }
            else
            {
                 if(ar[i][j]>sum)
                 {
                     sum=ar[i][j];
                 }
            }
        }
        if(c)
              break;

    }
    if(c)
        printf("Case #%d:\nSend Kurdy\n\n",cs++);
    else
         printf("Case #%d:\n%0.4lf\n\n",cs++,sum);
    //printf("%lf\n",ar[1][5]);

    /*for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            printf("%lf ",ar[i][j]);
        }
        printf("\n");
    }*/
}

    return 0;
}

#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;

int main()
{

    int t,cs=1;
    cin>>t;
    getchar();
    getchar();
    while(t--)
    {
         int n;
         cin>>n;
         int ar[n+1][4];
        int taken[4];
        memset(taken,0,sizeof(taken));
        for(int i=1;i<=n;i++)
        for(int j=1;j<=3;j++)
        {
            scanf("%d",&ar[i][j]);


        }
        int sum=0;
         for(int i=1;i<=n;i++)
        {
             int num=10000000;int c;
            for(int j=1;j<=3;j++)
        {
              if(taken[j]!=0)
                 continue;
              if(ar[i][j]<num)
              {
                  num=ar[i][j];
                  c=j;
              }

        }


                    memset(taken,0,sizeof(taken));
                    taken[c]=1;
               sum=sum+num;
        }
printf("Case %d: %d\n",cs++,sum);

    }


    return 0;
}

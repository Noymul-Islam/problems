#include<cstdio>
#include<cmath>
#include<iostream>

using namespace std;
 int ar[120][120];
int main()
{
    int cs=1,t;
    scanf("%d",&t);
    int n,ed,u,v;
    int ans;
    while(t--)
    {
        scanf("%d",&n);
         scanf("%d",&ed);
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
             {   if(i==j)
              ar[i][j]=0;
                else
                 ar[i][j]=1000000;}
        for(int i=0;i<ed;i++)
        {
            cin>>u>>v;
            ar[u][v]=1;
            ar[v][u]=1;


        }
        cin>>u>>v;
        for(int k=0;k<n;k++)
            for(int i=0;i<n;i++)
             for(int j=0;j<n;j++)
        {
            if(ar[i][j]>ar[i][k]+ar[k][j])
             {
                 ar[i][j]=ar[i][k]+ar[k][j];

             }

        }
        ans=-1;
        for(int i=0;i<n;i++)
        {

            ans=max(ans,(ar[u][i]+ar[i][v]));

        }

        printf("Case %d: %d\n",cs++,ans);

  /*for(int i=0;i<n;i++)
  {

    for(int j=0;j<n;j++)
  {
      printf("%d ",ar[i][j]);


  }
    ;printf("\n");
  }*/


    }

    return 0;
}

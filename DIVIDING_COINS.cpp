#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;
int dp[102][500005];
int coin[102];
int knapsak(int item, int weight);
int n,m;
int main()
{

    cin>>n;
    while(n--)
    {
         int sum=0;
        memset(dp,-1,sizeof(dp));
        cin>>m;
        for(int i=1;i<=m;i++)
        {cin>>coin[i];
        sum+=coin[i];
        }
        int r=knapsak(m,sum/2);
        int res=sum-(r*2);
        printf("%d\n",res);

    }
    return 0;
}
int knapsak(int item, int weight )
{
    for(int i=0;i<=weight;i++)
      dp[0][i]=0;
    for(int i=1;i<=item;i++)
    {
        for(int tot=0;tot<=weight;tot++)
        {
            if(coin[i]<=tot)
            {
                dp[i][tot]=max(dp[i-1][tot],dp[i-1][tot-coin[i]]+coin[i]);

            }
            else
                dp[i][tot]=dp[i-1][tot];

        }

    }

    return dp[item][weight];
}

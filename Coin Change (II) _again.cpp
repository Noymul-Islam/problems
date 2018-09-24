#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
long long int dp[10010];
int coin[105],n,k;
long long int fun(int k);
int main()
{
    int t,cs=1;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&k);

        dp[0]=1;
        for(int i=1;i<=k;i++)
           dp[i]=0;
        for(int i=0;i<n;i++)
           scanf("%d",&coin[i]);
        printf("Case %d: %lld\n",cs++,fun(k)%100000007);


    }
}

long long int fun(int k)
{

    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=k;j++)
        {
            if(coin[i]<=j)
            dp[j]=dp[j]%100000007+dp[j-coin[i]]%100000007;

        }
    }
    return dp[k];

}
